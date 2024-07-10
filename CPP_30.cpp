```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {})); 
    vector<float> v = {-1.0, -2.0, 3.0};
    vector<float> v1 = get_positive(v);
    for (float num : v1) {
        cout << num << " ";
    }
    return 0;
}
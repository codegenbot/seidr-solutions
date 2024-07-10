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
    vector<float> input = {1.5, -2.3, 4.7, -5.6};
    vector<float> output = get_positive(input);
    for (float num : output) {
        std::cout << num << " ";
    }
    return 0;
}
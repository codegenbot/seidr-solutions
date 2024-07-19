#include <vector>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<float> l = {1.0f, -2.0f, 3.0f, -4.0f};
    vector<float> result = get_positive(l);
    
    for (float num : result) {
        cout << num << " ";
    }
    return 0;
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
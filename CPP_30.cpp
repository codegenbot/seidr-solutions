#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l) {
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));
    std::vector<float> input;
    float val;
    while (std::cin >> val) {
        input.push_back(val);
    }
    vector<float> pos = get_positive(input);
    for(float num : pos) {
        std::cout << num << " ";
    }
    return 0;
}
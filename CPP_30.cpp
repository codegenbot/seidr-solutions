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
    std::vector<float> numbers = {-1.5, -2.3, 0, 0.9, 2.7};
    std::vector<float> pos_numbers = get_positive(numbers);
    
    for (float num : pos_numbers) {
        std::cout << num << " ";
    }
    
    return 0;
}
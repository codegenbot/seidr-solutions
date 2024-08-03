#include <vector>
#include <iostream>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(auto x : l) {
        if(x > 0.0f)
            result.push_back(x);
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1, -2, 3, -4, 5};
    std::vector<float> positive_numbers = get_positive(numbers);

    for(auto x : positive_numbers) {
        std::cout << x << " ";
    }
    return 0;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) 
        return false;

    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-9)
            return false;
    }

    return true;
}
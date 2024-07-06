#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(std::initializer_list<float> a, std::initializer_list<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(a.begin()[i] == b.begin()[i])) return false;
    }
    return true;
}

std::vector<float> get_positive(std::initializer_list<float> l) {
    std::vector<float> result{l.begin(), l.end()};
    for (float& num : result) {
        if (num <= 0) {
            auto it = std::find(result.begin(), result.end(), num);
            if (it != result.end()) {
                result.erase(it);
            }
        }
    }
    return result;
}

int main() {
    std::vector<float> vec1 = {1, 2, 3}; 
    std::vector<float> vec2 = {4, 5, -6};
    for (float num : get_positive({vec1.begin(), vec1.end()})) {
        std::cout << num << " ";
    }
    for (float num : get_positive({vec2.begin(), vec2.end()})) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
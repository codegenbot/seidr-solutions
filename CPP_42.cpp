#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (const auto& element : a) {
        if (element != b[element]) return false;
    }
    return true;
}

std::vector<int> incr_list(const std::vector<int>& l1) {
    std::vector<int> result;
    for (const auto& element : l1) {
        result.push_back(element + 1);
    }
    return result;
}

int main(void) {
    const std::vector<int> v1 = incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123});
    if (issame(v1, {6, 3, 6, 3, 4, 4, 10, 1, 124})) {
        std::cout << "The vectors are equal." << std::endl;
    } else {
        std::cout << "The vectors are not equal." << std::endl;
    }
    return 0;
}
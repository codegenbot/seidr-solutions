#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b, float threshold) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(abs(a[i]) == abs(b[i]))) return false;
    }
    return true;
}

std::vector<float> get_positive(std::initializer_list<float> l) {
    std::vector<float> result{l.begin(), l.end()};
    result.erase(std::remove_if(result.begin(), result.end(), [](float num){return num <= 0;}), result.end());
    return result;
}

int main() {
    std::vector<float> vec1 = {1, 2, 3}; 
    std::vector<float> vec2 = {4, 5, -6};
    std::cout << "Only positive numbers are: ";
    for (float num : get_positive({vec1.begin(), vec1.end()}) | std::views::combine(get_positive({vec2.begin(), vec2.end()})))) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
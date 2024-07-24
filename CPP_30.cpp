#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(std::initializer_list<float> values) {
    return std::vector<float>(values);
}

int main() {
    std::vector<float> vec1 = get_positive({1.0f, 2.0f, 3.0f});
    std::vector<float> vec2 = get_positive({1.0f, 2.0f, 3.0f});
    
    bool result = issame(vec1, vec2);
    
    return 0;
}
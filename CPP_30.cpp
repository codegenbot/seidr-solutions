#include <vector>
#include <initializer_list>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(std::initializer_list<float> values) {
    return std::vector<float>(values);
}

int main() {
    issame(get_positive({3.14, 2.71}), get_positive({3.14, 2.71}));
    return 0;
}
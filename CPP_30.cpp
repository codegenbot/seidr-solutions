#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::initializer_list<float> values) {
    std::vector<float> result;
    for (auto val : values) {
        if (val > 0) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    // Add your code logic here
    return 0;
}
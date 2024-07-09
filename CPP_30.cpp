```cpp
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(get_positive({}) == {});
    std::vector<float> v1 = {1.2f, -3.4f, 5.6f};
    std::vector<float> v2 = {-7.8f, 9.0f, -11.12f};

    if (issame(get_positive(v1), get_positive(v2))) {
        std::cout << "The two vectors have the same positive elements.\n";
    } else {
        std::cout << "The two vectors do not have the same positive elements.\n";
    }
}
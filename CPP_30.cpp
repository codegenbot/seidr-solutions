#include <vector>
#include <initializer_list>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

float get_positive(std::initializer_list<float> input) {
    std::vector<float> v(input.begin(), input.end());
    return *std::max_element(v.begin(), v.end());
}

int main() {
    float num;
    std::vector<float> v1, v2;
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) break;
        if (num > 0) {
            v1.push_back(num);
        } else {
            v2.push_back(num);
        }
    }
    if (!issame(v1, v2)) {
        std::cout << "The two sets of numbers are not the same.\n";
    } else {
        float max = get_positive({v1.begin(), v1.end()});
        std::cout << "The maximum positive number is: " << max << "\n";
    }
    return 0;
}
#include <vector>
#include <initializer_list>
#include <algorithm>

bool issame(std::initializer_list<float>a, std::initializer_list<float>b) {
    auto va = std::vector<float>(a);
    auto vb = std::vector<float>(b);
    if (va.size() != vb.size()) {
        return false;
    }
    for (int i = 0; i < va.size(); i++) {
        if (std::abs(va[i] - vb[i]) > 1e-9) {
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
    
    float maxV1 = get_positive({v1.begin(), v1.end()});
    float maxV2 = get_positive({v2.begin(), v2.end()});

    if (!issame({maxV1}, {0.0})) { 
        std::cout << "The two sets of numbers are not the same.\n";
    } else {
        std::cout << "The two sets of numbers are the same.\n";
    }
    return 0;
}
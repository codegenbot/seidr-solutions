```cpp
#include <vector>
#include <initializer_list>
#include <algorithm>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

float getPositive(const std::vector<float>& input) {
    if(input.empty()) return 0;
    return *std::max_element(input.begin(), input.end());
}

int main() {
    float num;
    std::vector<float> v1, v2;
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) break;
        if (num > 0) v1.push_back(static_cast<float>(num));
        else v2.push_back(-static_cast<float>(num)); 
    }
    
    float maxV1 = getPositive(v1);
    float maxV2 = getPositive(v2);

    std::cout << "The two sets of numbers are " << (issame({maxV1}, {maxV2}) ? "" : "not ") << "the same.\n";
    return 0;
}
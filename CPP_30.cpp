```c++
#include <vector>
#include <initializer_list>
#include <algorithm>

bool issame(std::vector a, std::vector b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

float get_positive(std::vector input) {
    return *std::max_element(input.begin(), input.end());
}

int main() {
    float num;
    std::vector v1, v2;
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) break;
        if (num > 0) v1.push_back(num);
        else v2.push_back(-num); 
    }
    
    float maxV1 = get_positive(v1);
    float maxV2 = get_positive(v2);

    std::cout << "The two sets of numbers are " << (issame({maxV1}, {maxV1}) ? "" : "not ") << "the same.\n";
    return 0;
}
```cpp
#include <iostream>
#include <vector>

float max_element(const std::vector<float>& l){
    float max = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> vec(n);
    for (float &i : vec) {
        std::cout << "Enter element " << i + 1 << ":";
        std::cin >> i;
    }

    float result = max_element(vec);
    std::cout << "Maximum element is: " << result << "\n";

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int text = 10920; // or any other input
    int target = 346266;

    std::vector<int> result;
    for (int i = 0; i <= text - target; i++) {
        if (std::to_string(text).substr(i, std::to_string(target).size()) == std::to_string(target)) {
            result.push_back(i);
        }
    }

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
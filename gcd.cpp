```cpp
#include <iostream>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    if(b != 0) return 1; 
    return a;
}

int main() {
    int a = 12; 
    int b = 15;
    std::cout << "GCD: " << gcd(a, b) << std::endl;

    int text = 1234567;
    int target = 345;
    
    std::vector<int> result;
    int index = 0;
    while (index <= text - target + 1) {
        if ((text - index) >= target && (text - index) % target == 0) {
            for (int i = 0; i < target; i++) {
                if ((text - index + i) % target != 0 || i >= target) {
                    break;
                }
            }
            result.push_back(index);
        }
        index += target;
    }

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
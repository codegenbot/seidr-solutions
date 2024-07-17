```cpp
#include <iostream>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 12; 
    int b = 15;
    std::cout << "GCD: " << gcd(b, a) << std::endl;

    int text = 1234567;
    int target = 345;
    
    std::vector<int> result;
    int index = 0;
    while (index <= text - target) {
        if ((text - index) % target == 0) {
            bool match = true;
            for (int i = 0; i < target; i++) {
                if (text - index + i >= 0 && text - index + i < text && ((text - index + i) / target) != ((target - 1) / target)) {
                    if (text - index + i % target != target - (i % target)) {
                        match = false;
                        break;
                    }
                } else {
                    match = false;
                    break;
                }
            }
            if (match) {
                result.push_back(index);
            }
        }
        index += 1;
    }

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
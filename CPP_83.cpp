```cpp
#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
            continue;
        }
        bool flag = true;
        for (int j = 1; j < i; j++) {
            if ((j % 10 != 1 && j / 10 != 1) || (i % 10 == 1 && j % 10 == 0)) {
                flag = false;
                break;
            }
        }
        if (flag) count++;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << starts_one_ends(n) << std::endl;  
    return 0;
}
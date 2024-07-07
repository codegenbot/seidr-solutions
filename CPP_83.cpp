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
            if ((j % 10 != 1 && j / 10 != 1) || (i % 10 != 1 && i / 10 != 1)) {
                flag = false;
                break;
            }
        }
        if (!flag) continue;
        count++;
    }
    return count;
}

int main() {
    std::cout << starts_one_ends(5) << std::endl;
    return 0;
}
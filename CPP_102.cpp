#include <iostream>

int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return x;
    } else if (x % 2 != 0 && y % 2 != 0) {
        return -1;
    } else {
        int even_num = x % 2 == 0 ? x : y;
        while (even_num <= y) {
            if (even_num % 2 == 0) {
                return even_num;
            }
            even_num += 2;
        }
    }
    return -1;
}
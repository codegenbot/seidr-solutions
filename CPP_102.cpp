#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    if (x > y) {
        swap(x, y);
    }
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            return i;
        }
    }
    return -1;
}
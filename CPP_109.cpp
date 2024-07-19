#include <iostream>

int move_one_ball(int a, int b, int n) {
    if (n % 2 == 0) {
        return (a + b) / 2;
    } else {
        return a;
    }
}
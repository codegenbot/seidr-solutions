#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return max(x, y);
    } else if ((x % 2 != 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 != 0)) {
        return -1;
    } else if (x % 2 != 0 && y % 2 != 0) {
        int maxEven = ((y-x)/2)*2;
        if (maxEven >= x)
            return maxEven;
        else
            return -1;
    }
}
#include <cassert>

bool isCube(int n) {
    int side = round(cbrt(n));
    if (side * side * side == n)
        return true;
    else
        return false;
}

void originalFunction() {
    for (int i = 1; i <= 1000; i++) {
        if (isCube(i)) {
            cout << "The cube root of " << i << " is " << round(cbrt(i)) << endl;
        }
    }
}

int cpp77Main(){
    originalFunction();
    assert (isCube(1729) == false);
    return 0;
}
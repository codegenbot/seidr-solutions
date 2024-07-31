#include <iostream>
#include <cassert>

using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (i % 11 == 0 || i % 13 == 0) {
            int num = i;
            while (num > 0) {
                if (num % 10 == 7) {
                    count++;
                }
                num /= 10;
            }
        }
    }
    return count;
}

int main() {
    assert(fizz_buzz(100000) == 8026);
    return 0;
}
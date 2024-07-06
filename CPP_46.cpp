#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 3)
        return 0;
    int prevPrev = 0, prev = 0, cur = 2;
    for (int i = 4; i <= n; ++i) {
        int next = prevPrev + prev + cur;
        prevPrev = prev;
        prev = cur;
        cur = next;
    }
    return cur;
}

int main() {
    printf("%d\n", fib4(5));
    printf("%d\n", fib4(6));
    printf("%d\n", fib4(7));
    return 0;
}
#include <stdio.h>

using namespace std;

int fib4(int n) {
    if (n <= 3) return 0;
    int prev2 = 0, prev1 = 0, prev = 2, curr;
    for (int i = 4; i <= n; ++i) {
        curr = prev + prev1 + prev2;
        prev2 = prev1;
        prev1 = prev;
        prev = curr;
    }
    return curr;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d-th element is: %d\n", n, fib4(n));
    return 0;
}
#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 1) return 0;
    int prev3 = 2, prev2 = 0, prev1 = 0, curr = 2;
    for (int i = 4; i <= n; ++i) {
        int temp = curr;
        curr = prev3 + prev2 + prev1;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = temp;
    }
    return curr;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d-th element of fib4 sequence is %d\n", n, fib4(n));
    return 0;
}
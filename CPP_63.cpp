#include <stdio.h>
using namespace std;

int fibfib(int n) {
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibfib(n-1) + fibfib(n-2) + fibfib(n-3);
}

int main() {
    int n;
    printf("Enter the position of the number in the sequence: ");
    scanf("%d", &n);
    printf("The %dth element of the FibFib sequence is: %d\n", n, fibfib(n));
    return 0;
}
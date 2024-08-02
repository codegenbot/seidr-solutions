#include <stdio.h>
using namespace std;

int fibfib(int n) {
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else {
        int a = 0, b = 0, c = 1, d = 1;
        for (int i = 3; i <= n; i++) {
            int temp = a + b + c;
            a = b;
            b = c;
            c = d;
            d = temp;
        }
        return d;
    }
}

int main() {
    int n;
    printf("Enter the position of the number in the sequence: ");
    scanf("%d", &n);
    printf("The %d-th element is: %d\n", n, fibfib(n));
    return 0;
}
#include <stdio.h>
using namespace std;

int largest_divisor(int n) {
    for (int i = n/2; i > 0; i--) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The largest divisor is: %d\n", largest_divisor(n));
    return 0;
}
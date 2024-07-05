#include<stdio.h>
using namespace std;

int sum_to_n(int n){
    return n * (n + 1) / 2;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum_to_n(n));
    return 0;
}
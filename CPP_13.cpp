/*
Return a greatest common divisor of two integers a and b
>>> greatest_common_divisor(3, 5)
1
>>> greatest_common_divisor(25, 15)
5
*/
#include<stdio.h>
using namespace std;
int greatest_common_divisor(int a, int b){
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",greatest_common_divisor(a,b));
    return 0;
}

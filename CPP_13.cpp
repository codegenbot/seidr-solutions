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
if (a == 0)
return b;

while (b != 0) {
if (a > b)
a = a - b;
else
b = b - a;
}
return a;
}
int main(){
int a, b;
scanf("%d %d", &a, &b);
printf("%d\n", greatest_common_divisor(a, b));
return 0;
}

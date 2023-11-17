/*
Create a function that takes 3 numbers.
Returns true if one of the numbers is equal to the sum of the other two, and all numbers are integers.
Returns false in any other cases.

Examples
any_int(5, 2, 7) ➞ true

any_int(3, 2, 2) ➞ false

any_int(3, -2, 1) ➞ true

any_int(3.6, -2.2, 2) ➞ false



*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool any_int(float a,float b,float c){
    if(a==b+c||b==a+c||c==a+b){
        if(floor(a)==a&&floor(b)==b&&floor(c)==c)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main(){
    float a,b,c;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("Enter the third number:");
    scanf("%f",&c);
    if(any_int(a,b,c))
        printf("True");
    else
        printf("False");
    return 0;
}

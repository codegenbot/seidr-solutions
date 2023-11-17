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
    float sum;
    sum = a + b + c;
    if(a+b==c){
      return true;
    }
    if(a+c==b){
      return true;
    }
    if(a+b+c==sum){
        return true;
    }
    else{
      return false;
    }
}
int main(){
  printf("%d",any_int(12.0,24.0,3.0));
  return 0;
}

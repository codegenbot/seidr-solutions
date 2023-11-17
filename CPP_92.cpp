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
  bool ans =  false;
  int m=a+b;
  int n = a+c;
  int o = b+c;
  if((fmod(a,1)==0 && fmod(b,1)==0)&& (fmod(c,1)==0) &&((m==c ||n == b || o==a))){
    ans=true;
  }
  return ans;

}
void main()
{
  float e,f,g;
  printf("Enter three numbers:");
  scanf("%f%f%f",&e,&f,&g);
  bool r=any_int(e,f,g);
  printf("%d",r);
}

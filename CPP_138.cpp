/*
Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
Example
is_equal_to_sum_even(4) == false
is_equal_to_sum_even(6) == false
is_equal_to_sum_even(8) == true
*/
#include <iostream>
#include<stdio.h>

using namespace std;
bool is_equal_to_sum_even(int n){
  if(n%2==0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int n;
  cin>>n;
  if(is_equal_to_sum_even(n)==true)
  {
    cout<<"true";
  }
  else
  {
    cout<<"false";
  }
  return 0;
}

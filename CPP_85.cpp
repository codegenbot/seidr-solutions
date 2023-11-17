/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
int sum = 0;
for(int i = 1; i < lst.size(); i++)
{
  if(i % 2 == 1)
  {
    sum += lst.at(i);
  }
}
return sum;
}
using namespace std;
int add(vector<int> lst){

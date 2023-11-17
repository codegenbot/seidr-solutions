/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
int result = 0;
int len = lst.size();
for(int i = 1; i < len; i+=2)
{
if((lst[i] % 2) == 0)
{
result = result + lst[i];
}
return result;
}
using namespace std;
int add(vector<int> lst){

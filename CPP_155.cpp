
/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
int even=0,odd=0;
vector<int> ans;
if(num<0)
num=-num;
while(num>0)
{
if(num%2==0)
{
even++;
}
else
{
odd++;
}
num=num/10;
}
ans.push_back(even);
ans.push_back(odd);
return ans;
}
using namespace std;
vector<int> even_odd_count(int num){

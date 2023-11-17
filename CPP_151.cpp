/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<vector>
#include<assert.h>
using namespace std;
long long int double_the_difference(vector<float> lst){
long long sum=0;
for(int i=0;i<lst.size();i++)
{
if(lst[i]>0)
{
if(lst[i]==int(lst[i])&&lst[i]%2!=0)
{
sum=sum+lst[i]*lst[i]*lst[i]*lst[i];
}
}
}
int main()
{
vector<float> lst = {1, 3, 2, 0};
int odd_sum = 1 + 9 + 0 + 0;
assert (double_the_difference(lst) == odd_sum );
return 0;
return sum;
}

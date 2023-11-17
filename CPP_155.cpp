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
    int count1=0,count2=0;
    vector<int> result;
    while(num)
    {
        int rem=num%10;
        if(rem%2==0) count1++;
        else count2++;
        num=num/10;
    }
    result.push_back(count1);
    result.push_back(count2);
    return result;
}
int main()
{
    int n;
    scanf("%d",&n);
    vector<int> res;
    res=even_odd_count(n);
    for(int i=0;i<res.size();i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){

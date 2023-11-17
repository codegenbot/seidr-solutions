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
    int even_number=0;
    int odd_number=0;
    vector<int> result;
    while(num)
    {
        int n=num%10;
        if(n%2==0)
        {
            even_number++;
        }
        else
        {
            odd_number++;
        }
        num=num/10;
    }
    result.push_back(even_number);
    result.push_back(odd_number);
    return result;
}

int main()
{
    vector<int> v;
    v=even_odd_count(1234);
    for(int i=0;i<v.size();i++)
    {
        printf("%d\n",v[i]);
    }
}
using namespace std;
vector<int> even_odd_count(int num){

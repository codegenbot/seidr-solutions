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
    int even=0;
    int odd=0;
    int n=num;
    while(n>0)
    {
        int r=n%10;
        if(r%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n=n/10;
    }
    vector<int> v;
    v.push_back(even);
    v.push_back(odd);
    return v;
}
int main()
{
    int a;
    scanf("%d",&a);
    vector<int> v=even_odd_count(a);
    printf("%d %d",v[0],v[1]);
}
using namespace std;
vector<int> even_odd_count(int num){

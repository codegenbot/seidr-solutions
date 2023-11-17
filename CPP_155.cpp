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
    vector<int> v;
    while(num){
        int r=num%10;
        if(r%2==0)
            even++;
        else
            odd++;
        num/=10;
    }
    v.push_back(even);
    v.push_back(odd);
    return v;
}
int main(){
    int num;
    scanf("%d",&num);
    vector<int> v=even_odd_count(num);
    for(int i=0;i<v.size();i++)
        printf("%d ",v[i]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){

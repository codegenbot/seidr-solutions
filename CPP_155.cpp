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
    vector<int> vec(2);
    vec[0]=0,vec[1]=0;
    string s=to_string(num);
    for(int i=0;i<s.length();i++)
    {
        if((s[i]-'0')%2==0)
        {
            vec[0]++;
        }
        else
        {
            vec[1]++;
        }
    }
    return vec;
}
using namespace std;
vector<int> even_odd_count(int num){

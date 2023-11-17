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
    vector<int> v{0,0};
    while(num!=0){
        if(abs(num%10)%2==0){
            v[0]++;
        }
        else{
            v[1]++;
        }
        num=num/10;
    }
    return v;
}
using namespace std;
vector<int> even_odd_count(int num){

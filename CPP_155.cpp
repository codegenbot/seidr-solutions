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
vector<int> even_odd_count(int num){
    vector<int> result;
    int even = 0;
    int odd = 0;
    int n = abs(num);
    while(n>0){
        int r = n%10;
        if(r%2==0){
            even++;
        }
        else{
            odd++;
        }
        n = n/10;
    }
    result.push_back(even);
    result.push_back(odd);
    return result;
}
using namespace std;
vector<int> even_odd_count(int num){

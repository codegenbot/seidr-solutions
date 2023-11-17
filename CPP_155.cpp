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
    vector<int> result;
    int even_count = 0;
    int odd_count = 0;
    int i;
    int a;
    for(i = 0; i < num.size(); i++){
        a = num % 10;
        if(a % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
        num = num / 10;
    }
    result.push_back(even_count);
    result.push_back(odd_count);
    return result;
}
using namespace std;
vector<int> even_odd_count(int num){

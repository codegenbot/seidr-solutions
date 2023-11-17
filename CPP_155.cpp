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
    result.push_back(0);
    result.push_back(0);
    if(num == 0){
        result[0] = 1;
        return result;
    }
    if(num < 0){
        num = -num;
    }
    while(num){
        if(num % 2 == 0){
            result[0]++;
        }
        else{
            result[1]++;
        }
        num /= 10;
    }
    return result;
}
using namespace std;
vector<int> even_odd_count(int num){

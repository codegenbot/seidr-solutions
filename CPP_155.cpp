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
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    if (num < 0)
        num = -num;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit % 2 == 0)
            v[0]++;
        else
            v[1]++;
        num /= 10;
    }
    return v;
}
using namespace std;
vector<int> even_odd_count(int num){

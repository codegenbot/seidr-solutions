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
    int e = 0, o = 0;
    if (num < 0) num *= -1;
    while (num != 0) {
        if (num % 2 == 0) e++;
        else o++;
        num /= 10;
    }
    v.push_back(e);
    v.push_back(o);
    return v;
}

using namespace std;
vector<int> even_odd_count(int num){

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
using namespace std;
vector<int> even_odd_count(int num) {
    int i = 0;
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        if((i=num%10)%2 == 0) {
            digit = even -> increment();
        }
        else {
            digit = odd -> increment();
        }
        num /= 10;
    }
    vector<int> even_odd = {even, odd};
    return even_odd;
}

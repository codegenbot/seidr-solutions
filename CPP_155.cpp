/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
#include<string>
#include<vector>
vector<int> even_odd_count(int num){
    int arr[2] = {0, 0};
    if(num < 0) num *= -1;
    while(num != 0){
        if(num % 2 == 0) arr[0]++;
        else arr[1]++;
        num /= 10;
    }
    return vector<int>(arr, arr + 2);
}
bool issame(vector<int> a,vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(-12) , {1, 1}));
    assert (issame(even_odd_count(123) , {1, 2}));
    assert (issame(even_odd_count(1234567890) , {5, 5}));
    assert (issame(even_odd_count(123456789) , {4, 5}));
    assert (issame(even_odd_count(12345678) , {3, 5}));
    assert (issame(even_odd_count(1234567) , {2, 5}));
    assert (issame(even_odd_count(123456) , {3, 3}));
    assert (issame(even_odd_count(12345) , {2, 3}));
    assert (issame(even_odd_count(1234) , {1, 3}));
    assert (issame(even_odd_count(123) , {1, 2}));
    assert (issame(even_odd_count(12) , {2, 0}));
    assert (issame(even_odd_count(1) , {0, 1}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(0) , {

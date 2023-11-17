/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <assert.h>
using namespace std;
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
bool issame(vector<int> a,vector<int>b){
    return (a[0]==b[0] && a[1]==b[1]);
}
int main(){
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(-12) , {1, 1}));
    assert (issame(even_odd_count(123) , {1, 2}));
    assert (issame(even_odd_count(-123) , {1, 2}));
    assert (issame(even_odd_count(12) , {2, 0}));
    assert (issame(even_odd_count(11) , {0, 1}));
    assert (issame(even_odd_count(-1234) , {2, 2}));
    assert (issame(even_odd_count(1234) , {2, 2}));
}

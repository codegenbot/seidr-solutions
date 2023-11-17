/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
vector<int> even_odd_count(int num){
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
bool issame(vector<int> a,vector<int>b){
    if(a[0] == b[0] && a[1] == b[1]){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(-12) , {1, 1}));
    assert (issame(even_odd_count(123) , {1, 2}));
}

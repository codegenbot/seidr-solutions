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
int odd=0,even=0;
for (int i=0;i<num;i++){
    if ((num%2)!=0){
        odd++;
    }
    else{
        even++;
    }
}
}
using namespace std;
vector<int> even_odd_count(int num){

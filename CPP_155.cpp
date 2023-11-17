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
    vector<int> arr;
    int c = 0, d = 0;
    if(num < 0){
        num*=-1;
    }
    while(num!=0){
     if(num%2==0){
         c++;
     }
     else{
         d++;
     }
     num/=10;
    } 
    arr.push_back(c);
    arr.push_back(d);
    return arr;
}

using namespace std;
vector<int> even_odd_count(int num){

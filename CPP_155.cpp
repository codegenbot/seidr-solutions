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
    vector<int> result(2);
    // Complete this code
    return result;
}
int main(){
    int num;
    scanf("%d",&num);
    vector<int> result = even_odd_count(num);
    printf("%d %d",result[0],result[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){

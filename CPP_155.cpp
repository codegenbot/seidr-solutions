/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(2468) ==> {4, 0}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
    vector<int> res;
    res.push_back(0);
    res.push_back(0);
    int i=abs(num);
    while(i!=0){
        if(i%2==0){
            res[0]++;
        }
        else{
            res[1]++;
        }
        i/=10;
    }
    return res;
}

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    vector<int> res=even_odd_count(num);
    printf("Even: %d\nOdd: %d",res[0],res[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){

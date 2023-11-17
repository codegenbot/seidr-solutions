/*
Given two positive integers a and b, return the even digits between a
and b, in ascending order.

For example:
generate_integers(2, 8) => {2, 4, 6, 8}
generate_integers(8, 2) => {2, 4, 6, 8}
generate_integers(10, 14) => {}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> generate_integers(int a,int b){
    vector<int> result;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        if(i%2==0){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    vector<int> result=generate_integers(2,8);
    for(int i=0;i<result.size();i++){
        printf("%d ",result[i]);
    }
    printf("\n");
    result=generate_integers(8,2);
    for(int i=0;i<result.size();i++){
        printf("%d ",result[i]);
    }
    printf("\n");
    result=generate_integers(10,14);
    for(int i=0;i<result.size();i++){
        printf("%d ",result[i]);
    }
    printf("\n");
    return 0;
}

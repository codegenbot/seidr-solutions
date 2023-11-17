/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
*/
#include<stdio.h>
#include<vector>
    int sum;
    for(int i=0;i<lst.size();i++){
        if(i%2==0&&lst[i]%2!=0){
            sum+=lst[i];
        }
    }
    return sum;
}
int main(){
    int sum;
    vector<int> lst={1,3,5,7,9};
    sum=solutions(lst);
    printf("%d\n",sum);
    return 0;
}
using namespace std;
int solutions(vector<int> lst){

/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
    int sum = 0;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0 && i % 2 != 0){
            sum += lst[i];
        }
    }
    return sum;
}

int main(){
    vector<int> v = {4, 2, 6, 7};
    printf("%d\n", add(v));
    return 0;
}
using namespace std;
int add(vector<int> lst){

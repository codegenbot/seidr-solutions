/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
    int result = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i%2 != 0){
            if(lst[i]%2 == 0){
                result += lst[i];
            }
        }
    }
    return result;
}

int main(){
    int arr[] = {4, 2, 6, 7};
    vector<int> lst(arr, arr + sizeof(arr)/sizeof(arr[0]));
    printf("%d\n", add(lst));
    return 0;
}
using namespace std;
int add(vector<int> lst){

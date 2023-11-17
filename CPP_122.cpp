#include<stdio.h>
 
int add_elements(int* arr, int k) {
    int sum=0;
    for(int i=0;i<k;i++){
        if(arr[i]<100 && arr[i]>9){
            sum+=arr[i];
        }
    }
    return sum;
}
 
using namespace std;
 
int add_elements(vector<int> arr,int k){

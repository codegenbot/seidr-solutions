#include<iostream>
#include<vector>
using namespace std;
vector<int> pluck(vector<int> arr){
    int smallest_value = -1;
    int smallest_index = -1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallest_value == -1 || arr[i] < smallest_value)){
            smallest_value = arr[i];
            smallest_index = i;
        }
    }
    if(smallest_index == -1){
        return {};
    }
    return {smallest_value, smallest_index};
}
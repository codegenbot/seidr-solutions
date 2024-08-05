
#include <iostream>
#include <vector>
#include <algorithm>

int can_arrange(std::vector<int> arr) {
    std::vector<int> uniqueElements;
    
    for(int i = 0; i < arr.size(); i++){
        if(std::count(arr.begin(), arr.end(), arr[i]) == 1){
            uniqueElements.push_back(arr[i]);
        }
    }
    
    int j = 0;
    for(int i = 0; i < arr.size(); i++){
        if(std::count(arr.begin(), arr.end(), arr[i]) > 1){
            arr[j++] = arr[i];
        }
    }
    
    for(int i = 0; i < uniqueElements.size(); i++){
        arr[j++] = uniqueElements[i];
    }
    
    return arr;
}
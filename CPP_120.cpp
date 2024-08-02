#include <iostream>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for(int i=0; i<k; i++){
        result.push_back(*std::max_element(arr.begin(), arr.end()));
        arr.erase(std::remove(arr.begin(), arr.end(), *std::max_element(arr.begin(), arr.end())), arr.end());
    }
    return result;
}
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b; 
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> arrCopy = arr;
    std::sort(arrCopy.begin(), arrCopy.end());
    if (k > arrCopy.size()) {
        k = arrCopy.size();
    }
    return {arrCopy.begin(), arrCopy.begin() + k};
}
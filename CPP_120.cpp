#include <vector>
#include <algorithm>
#include <functional>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

int main() {
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    assert(issame(maximum(arr,k) , result));
    return 0;
}

std::vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
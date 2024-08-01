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

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 5; // Assuming you want to take the maximum of top 5 elements
    assert(issame(maximum(arr,k) , {}));
    return 0;
}
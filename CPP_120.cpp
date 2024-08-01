```cpp
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
    std::cout << "Maximum elements are: ";
    for(int i=0; i<k;i++){
        cout << maximum(arr,k)[i]<<" ";
    }
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
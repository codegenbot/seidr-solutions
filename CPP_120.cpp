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
    int k = 5;
    std::vector<int> result = maximum(arr,k);
    if(issame(result, vector<int>(result.begin(), result.begin() + k))) {
        cout << "The first " << k << " elements of the array are in descending order." << endl;
    } else {
        cout << "The first " << k << " elements of the array are not in descending order." << endl;
    }
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
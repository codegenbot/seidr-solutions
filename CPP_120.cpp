#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(int a, int b) {
    if (a > b)
        return false;
    else
        return true;
}

int main() {
    vector<int> arr = {1, 3, 2};
    int k = 2;
    
    vector<int> result = maximum(arr, k);
    
    cout << "Maximum subarray is ";
    for (int i = 0; i < k; i++) {
        if (!issame(result[i], result[i + 1]))
            break;
        else
            continue;
    }
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b, int c) {
    return (a == b && b == c);
}

vector<int> maximum(vector<int> arr,int k){
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
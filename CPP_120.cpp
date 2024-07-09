```cpp
#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    if(x == y)
        return true;
    else
        return false;
}

vector<int> maximum(vector<int> arr,int k){
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
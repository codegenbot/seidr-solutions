```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int k = 3;
    vector<int> result = maximum(arr,k);
    for(int i : result) cout << i << " ";
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
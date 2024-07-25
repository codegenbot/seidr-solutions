```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if(a.size()!=b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

vector<int> main() {
    vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 5;
    return maximum(arr, k);
}
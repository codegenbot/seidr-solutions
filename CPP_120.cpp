#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b){
    return a.size() == b.size();
}

std::vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    copy_if(arr.begin(), arr.end(), result.begin(), greater<int>());
    return vector<int>(result.begin(), result.begin() + k);
}
```
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int> b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.end());
    sort(result.begin(), result.end());
    for(int i=k; i<arr.size(); i++) {
        if(arr[i] > arr[0]) {
            result.erase(result.begin());
            break;
        }
    }
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3) , {0, 1, 2}));
    return 0;
}
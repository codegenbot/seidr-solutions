```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int> b){
    if(a.size()!=b.size())return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

int main() {
    vector<int> output = pluck({7, 9, 7, 1});
    assert(issame(output, {})); 
    return 0;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return result;

    int minEven = INT_MAX;
    int index = -1;

    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    result.push_back(minEven);
    result.push_back(index);

    return result;
}
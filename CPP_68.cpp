#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestEven = INT_MAX;
    int smallestIndex = -1;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestEven){
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestIndex != -1){
        result.push_back(smallestEven);
        result.push_back(smallestIndex);
    }
    
    return result;
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), {}));
    // additional test cases
    return 0;
}
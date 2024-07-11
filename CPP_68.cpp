#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestEven = INT_MAX;
    int smallestIndex = INT_MAX;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestEven){
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestEven != INT_MAX){
        result.push_back(smallestEven);
        result.push_back(smallestIndex);
    }
    
    return result;
}

int main() {
    // Main function can go here for testing
    return 0;
}
#include <vector>
#include <climits>

bool issame(vector<int> a, vector<int> b);

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
    int smallestEvenValue = INT_MAX;
    int smallestEvenIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestEvenValue){
            smallestEvenValue = arr[i];
            smallestEvenIndex = i;
        }
    }
    
    if(smallestEvenIndex != -1){
        result.push_back(smallestEvenValue);
        result.push_back(smallestEvenIndex);
    }
    
    return result;
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}
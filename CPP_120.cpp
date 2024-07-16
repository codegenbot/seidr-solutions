#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
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

std::vector<int> maximum(std::vector<int> arr, int k){
    sort(arr.begin(), arr.end());
    std::vector<int> result;
    for(int i = arr.size() - k; i < arr.size(); i++){
        result.push_back(arr[i]);
    }
    return result;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
}
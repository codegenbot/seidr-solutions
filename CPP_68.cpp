#include <vector>

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

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int minEvenValue = INT_MAX;
    int minEvenIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue){
            minEvenValue = arr[i];
            minEvenIndex = i;
        }
    }
    
    if(minEvenIndex != -1){
        result.push_back(minEvenValue);
        result.push_back(minEvenIndex);
    }
    
    return result;
}

int main() {
    assert (issame(pluck({7, 9, 7, 1}) , {}));
    // Additional test cases here
    
    return 0;
}
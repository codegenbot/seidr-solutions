#include <vector>

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int smallestValue = -1;
    int smallestIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallestValue == -1 || arr[i] < smallestValue)){
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestIndex != -1){
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert (issame(pluck(std::vector<int>{7, 9, 7, 1}) , {}));
    
    return 0;
}
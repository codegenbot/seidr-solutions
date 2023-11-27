#include <vector>

std::vector<int> pluck(std::vector<int> arr);
bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
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

bool issame(std::vector<int> a, std::vector<int> b){
   return a == b;
}

int main(){
    assert (pluck({7, 9, 7, 1}) == {});
    
    return 0;
}
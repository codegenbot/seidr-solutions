#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int minEven = INT_MAX;
    int minEvenIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < minEven){
            minEven = arr[i];
            minEvenIndex = i;
        }
    }
    
    if(minEvenIndex != -1){
        result.push_back(minEven);
        result.push_back(minEvenIndex);
    }
    
    return result;
}
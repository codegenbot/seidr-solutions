#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){    
    std::vector<int> result;
    int smallestEven = -1;
    int smallestEvenIndex = -1;
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] % 2 == 0 && (smallestEven == -1 || a[i] < smallestEven)){
            smallestEven = a[i];
            smallestEvenIndex = i;
        }
    }
    
    if(smallestEven != -1){
        result.push_back(smallestEven);
        result.push_back(smallestEvenIndex);
    }
    
    return result;
}
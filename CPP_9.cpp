#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> rollingMax;
    int maxSoFar = INT_MIN;
    
    for(int i=0; i<numbers.size(); i++){
        maxSoFar = std::max(maxSoFar, numbers[i]);
        rollingMax.push_back(maxSoFar);
    }
    
    return rollingMax;
}

bool issame(std::vector<int>& a, std::vector<int>& b){
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

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    return 0;
}
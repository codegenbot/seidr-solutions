#include <vector>
#include <climits>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(size_t i=0; i<a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    std::vector<int> result = {INT_MIN, INT_MAX}; 
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive)) {
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative;
    result[1] = smallest_positive;
    
    return result;
}

int main(){
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    assert(issame(a, b) == true);
    
    std::vector<int> c = {1, 2, 3};
    std::vector<int> d = {1, 2, 4};
    assert(issame(c, d) == false);
    
    return 0;
}
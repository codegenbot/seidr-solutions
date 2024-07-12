#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    std::vector<int> result = {0, 0};
    int max_neg = INT_MIN;
    int min_pos = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > max_neg){
            max_neg = num;
        }
        if(num > 0 && num < min_pos){
            min_pos = num;
        }
    }
    
    if(max_neg != INT_MIN){
        result[0] = max_neg;
    }
    if(min_pos != INT_MAX){
        result[1] = min_pos;
    }
    
    return result;
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}
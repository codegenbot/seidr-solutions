#include <vector>
#include <climits>
#include <cassert>

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result = {INT_MAX, INT_MIN};
    
    for(int num : lst){
        if(num < 0 && num > result[1]){
            result[1] = num;
        } else if(num > 0 && num < result[0]){
            result[0] = num;
        }
    }
    
    if(result[0] == INT_MAX) {
        result[0] = 0;
    }
    if(result[1] == INT_MIN) {
        result[1] = 0;
    }
    
    return result;
}

int main() {
    std::vector<int> input = {-6, -4, -4, -3, -100, 1};
    std::vector<int> expected_output = {-100, -3};
    
    assert(largest_smallest_integers(input) == expected_output);
    
    return 0;
}
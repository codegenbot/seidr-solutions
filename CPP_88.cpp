#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int>& array){
    if(array.size() <= 1){
        return array;
    }
    
    if((array[0] + array[array.size()-1]) % 2 == 0){
        std::sort(array.rbegin(), array.rend());
    }
    else{
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main(){
    std::vector<int> input = {21, 14, 23, 11};
    std::vector<int> expected_output = {23, 21, 14, 11};
    
    assert (sort_array(input) == expected_output);
    
    return 0;
}
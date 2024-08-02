#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool are_same(const std::vector<int>& v1, const std::vector<int>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> test_input = {1, 3, 5, 2, 6, 4};
    vector<int> expected_output = {1, 3, 5, 5, 6, 6};
    vector<int> computed_output = rolling_max(test_input);
    
    assert(are_same(expected_output, computed_output));
    assert(are_same(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}
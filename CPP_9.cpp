#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& v1, const vector<int>& v2){
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

vector<int> rolling_max(const vector<int>& numbers){
    vector<int> result;
    int max_num = numbers[0];
    for(int i = 0; i < numbers.size(); i++){
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    vector<int> test_input = {1, 3, 5, 2, 6, 4};
    vector<int> expected_output = {1, 3, 5, 5, 6, 6};
    vector<int> computed_output = rolling_max(test_input);

    assert(issame(expected_output, computed_output));
    assert(issame(rolling_max({3, 2, 3, 100, 3}), vector<int>{3, 3, 3, 100, 100}));
}
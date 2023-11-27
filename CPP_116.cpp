#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

int main(){
    vector<int> input = {2, 4, 8, 16, 32};
    vector<int> expected_output = {2, 4, 8, 16, 32};
    
    vector<int> result = sort_array(input);
    
    assert(result.size() == expected_output.size());
    for (int i = 0; i < result.size(); i++) {
        assert(result[i] == expected_output[i]);
    }
    
    return 0;
}
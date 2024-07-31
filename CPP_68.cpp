#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest_even = -1, smallest_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_even != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}

int main() {
    vector<int> input = {2, 5, 1, 4, 7};
    vector<int> expectedResult = {2, 0};

    vector<int> result = pluck(input);

    assert(issame(result, expectedResult));

    return 0;
}
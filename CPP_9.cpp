#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main() {
    vector<int> input = {1, 3, 5, 2, 6, 4, 8};
    vector<int> expected_output = {1, 3, 5, 5, 6, 6, 8};
    
    vector<int> result = rolling_max(input);
    
    if (issame(result, expected_output)) {
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }
    
    return 0;
}
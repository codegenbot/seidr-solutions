#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
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
    vector<int> test_input {1, 3, 5, 2, 7, 6, 4, 8};
    
    vector<int> result = rolling_max(test_input);
    
    for(const auto& val : result) {
        std::cout << val << " ";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> rolling_max(vector<int> numbers);

int main() {
    // Implement main function if required for testing
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = INT_MIN;
    for(int num : numbers){
        maxNum = max(maxNum, num);
        result.push_back(maxNum);
    }
    return result;
}
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = INT_MIN;

    for (int i = 0; i < numbers.size(); ++i) {
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}
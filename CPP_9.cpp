#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int max_val = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            max_val = max(max_val, numbers[j]);
        }
        result.push_back(max_val);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    // Provided tasks might be done within the main function.
}
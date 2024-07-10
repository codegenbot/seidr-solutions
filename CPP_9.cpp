#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    if (numbers.empty()) {
        return result;
    }
    
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> temp;
    
    for (int num : arr) {
        int ones = __builtin_popcount(num);
        temp.emplace_back(ones, num);
    }
    
    sort(temp.begin(), temp.end());
    
    vector<int> result;
    
    for (const auto& p : temp) {
        result.push_back(p.second);
    }
    
    return result;
}
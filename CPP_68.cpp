#include <algorithm>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return {};

    auto it = min_element(arr.begin(), arr.end());
    while (*it % 2 != 0)
        it++;
    
    result.push_back(*it);  
    return result;
}
#include <vector>
#include <algorithm>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    if (!lst.empty()) {
        auto max_negative = *max_element(lst.begin(), lst.end(), 
            [](int a, int b){ return abs(a) > abs(b); });
        
        auto min_positive = *min_element(lst.begin(), lst.end(), 
            [](int a, int b){ return a < 0 && b >= 0; } || [](int a, int b){ return a >= 0 && b < 0; });
        
        result.push_back(max_negative);
        if (max_negative > 0) {
            result.push_back(0);
        } else {
            result.push_back(min_positive);
        }
    } else {
        result = {0, 0};
    }
    
    return result;
}
#include <vector>
#include <algorithm>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    if (!lst.empty()) {
        auto neg = *max_element(lst.begin(), lst.end(), 
            [](int a, int b){ return a >= 0; });
        
        auto pos = *min_element(lst.begin(), lst.end(), 
            [](int a, int b){ return a <= 0; });
        
        result.push_back(neg < 0 ? neg : 0);
        result.push_back(pos > 0 ? pos : 0);
    } else {
        result.push_back(0);
        result.push_back(0);
    }
    
    return result;
}
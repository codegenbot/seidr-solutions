#include <algorithm>
#include <vector>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;
    
    while (!lst.empty()) {
        auto minIt = min_element(lst.begin(), lst.end());
        auto maxIt = max_element(lst.begin(), lst.end());
        
        result.push_back(*minIt);
        lst.erase(minIt);
        if (!lst.empty())
            result.push_back(*max_element(lst.begin(), lst.end()));
        lst.erase(max_element(lst.begin(), lst.end()) - lst.begin());
    }
    
    return result;
}
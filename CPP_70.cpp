#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;
    
    vector<int> minMax(lst);
    sort(minMax.begin(), minMax.end());
    
    while (!minMax.empty()) {
        result.push_back(minMax.back());
        minMax.pop_back();
        
        if (!minMax.empty())
            sort(minMax.begin(), minMax.end());
    }
    
    return result;
}
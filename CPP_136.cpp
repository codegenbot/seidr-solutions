#include <algorithm>
#include <climits>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    if (lst.empty()) {
        result.push_back(0);
        result.push_back(0);
        return result;
    }
    
    int maxNegative = 0, minPositive = INT_MAX;
    
    for (int i : lst) {
        if (i < 0 && i > maxNegative) {
            maxNegative = i;
        } else if (i > 0 && i < minPositive) {
            minPositive = i;
        }
    }
    
    result.push_back(maxNegative);
    result.push_back(minPositive);
    
    return result;
}
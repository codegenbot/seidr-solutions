#include <vector>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    int max_negative = 0, min_positive = INT_MAX;
    
    for (int i : lst) {
        if (i < 0 && i > max_negative) {
            max_negative = i;
        } else if (i > 0 && i < min_positive) {
            min_positive = i;
        }
    }
    
    result.push_back(max_negative);
    result.push_back(min_positive);
    
    return result;
}
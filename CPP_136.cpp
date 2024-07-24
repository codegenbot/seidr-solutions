#include <algorithm>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    if(!lst.empty()) {
        auto max_negative = *max_element(lst.begin(), lst.end(), [](int a, int b){return a > 0;});
        
        if(max_negative < 0) {
            result.push_back(max_negative);
        } else {
            result.push_back(0);
        }
        
        auto min_positive = *min_element(lst.begin(), lst.end(), [](int a, int b){return a < 0;});
        
        if(min_positive > 0) {
            result.push_back(min_positive);
        } else {
            result.push_back(0);
        }
    } else {
        result.push_back(0);
        result.push_back(0);
    }
    
    return result;
}
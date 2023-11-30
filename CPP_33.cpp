#include <vector>
#include <algorithm>

vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    
    sort(result.begin(), result.end(), [](int a, int b) {
        return a % 3 == 0 && b % 3 == 0 ? a < b : false;
    });
    
    return result;
}
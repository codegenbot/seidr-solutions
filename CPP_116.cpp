Here is the completed code:

#include <algorithm>
#include <vector>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> arrWithCount;
    
    for (int num : arr) {
        int ones = __builtin_popcount(num);
        arrWithCount.push_back({ones, num});
    }
    
    sort(arrWithCount.begin(), arrWithCount.end());
    
    return vector<int>(arrWithCount.begin()->second + 1, arrWithCount.end(), {});
}
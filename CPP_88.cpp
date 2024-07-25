#include <algorithm>
#include <vector>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    int sum = array[0] + array[array.size() - 1];
    bool is_odd = sum % 2 != 0;
    
    vector<int> result = array;
    
    if (is_odd)
        sort(result.begin(), result.end());
    else
        sort(result.begin(), result.end(), greater<int>());
    
    return result;
}
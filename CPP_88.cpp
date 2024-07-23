#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    int sum = 0;
    for(int i : array) {
        sum += i;
    }
    vector<int> result = array;
    
    if (sum % 2 == 1)
        sort(result.begin(), result.end());
    else
        sort(result.begin(), result.end());
    
    return result;
}
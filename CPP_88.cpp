#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    int sum = 0;
    for (int i : array) sum += i;
    vector<int> result = array;
    
    if (sum % 2 == 1)
        sort(result.begin(), result.end());
    else
        stable_partition(result.begin(), result.end(), [&result](int i) {
            int median = result[0];
            for (int j : result) median = max(median, j);
            return i >= median;
        });
    
    return result;
}
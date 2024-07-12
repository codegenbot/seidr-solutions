#include <climits>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = INT_MIN;
    
    for (int i : numbers) {
        if (i > max) {
            max = i;
        }
        result.push_back(max);
    }
    
    return result;
#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    if (arr.size() <= 1)
        return 0;
    
    int min_diff = INT_MAX, changes = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1])
            continue;
        
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff < min_diff)
            min_diff = diff;
    }
    
    return min_diff;
}
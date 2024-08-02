#include <climits>
#include <vector>

using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    
    if (arr.empty()) return {0};
    
    int smallest = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }
    }
    
    result.push_back(smallest);
    
    return result;
}
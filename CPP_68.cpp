#include <vector>
#include <climits>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) 
        return {{INT_MAX, -1}}; // Return a pair with INT_MAX and -1 if the array is empty
    
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    result.push_back({minEvenValue, minIndex});
    
    return result;
}
#include <climits>
#include <vector>

using namespace std;

pair<int, int> pluck(vector<int> arr) {
    pair<int, int> result;
    
    if(arr.empty()) {
        result = make_pair(INT_MAX, -1);
    } else {
        int smallestEven = INT_MAX;
        int index = -1;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] % 2 == 0 && arr[i] < smallestEven) {
                smallestEven = arr[i];
                index = i;
            }
        }
        
        result = make_pair(smallestEven, index);
    }
    
    return result;
}
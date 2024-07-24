#include <vector>
#include <limits>

using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    
    if(arr.empty()) return result;
    
    int smallestEven = numeric_limits<int>::max();
    int smallestIndex = -1;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestEven){
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestEven != numeric_limits<int>::max()) result.push_back(smallestEven);
    
    return result;
}
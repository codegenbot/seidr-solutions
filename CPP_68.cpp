#include <vector>

vector<int> pluck(vector<int> arr){
    vector<int> result = {};
    
    int smallestEvenValue = -1;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallestEvenValue == -1 || arr[i] < smallestEvenValue)) {
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestEvenValue != -1) {
        result.push_back(smallestEvenValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}
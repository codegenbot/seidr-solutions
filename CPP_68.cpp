#include <vector>

using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return result; // If the array is empty, return an empty array
    
    int minEvenValue = INT_MAX;
    int minValueIndex = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) { // If the current value is even and less than the smallest even value found so far
            minEvenValue = arr[i]; 
            minValueIndex = i;
        }
    }
    
    result.push_back(minEvenValue);
    result.push_back(minValueIndex);
    
    return result;
}
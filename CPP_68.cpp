#include <vector>

using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return result; // If array is empty, return an empty result
    
    int minEvenIndex = 0;
    int minValue = arr[0];
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minValue) {
            minValue = arr[i];
            minEvenIndex = i;
        }
    }
    
    result.push_back(minValue);
    result.push_back(minEvenIndex);
    
    return result;
}
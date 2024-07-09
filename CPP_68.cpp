#include <vector>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;
    
    int minEven = INT_MAX;
    int indexMinEven = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            indexMinEven = i;
        }
    }
    
    if (minEven == INT_MAX) return {};
    
    result.push_back(minEven);
    result.push_back(indexMinEven);
    
    return result;
}
#include <vector>
#include <limits>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;
    
    int minEven = numeric_limits<int>::max();
    int indexMinEven = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            indexMinEven = i;
        }
    }
    
    if (minEven == numeric_limits<int>::max()) return {};
    
    result.push_back(minEven);
    result.push_back(indexMinEven);
    
    return result;
}
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    
    if (n == 0) {
        return result;
    }
    
    int last = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= last) {
            last = arr[i];
            result.push_back(last);
        }
    }
    
    std::reverse(result.begin(), result.end());
    
    return result;
}
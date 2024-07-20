#include <vector>

std::vector<int> leaders(std::vector<int> vec) {
    int n = vec.size();
    std::vector<int> result;
    
    for (int i = n - 1; i >= 0; --i) {
        if ((vec[i] >= vec[i+1]) || (i == n-1)) {
            result.push_back(vec[i]);
        }
    }
    
    return result;
}
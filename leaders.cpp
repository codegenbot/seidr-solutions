#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int rightmost = arr.back();
    std::vector<int> result;
    
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    
    return result;
}
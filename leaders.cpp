#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int rightmost = arr.back();
    std::vector<int> leaders;
    
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    
    leaders.push_back(rightmost);
    return leaders;
}
#include <algorithm>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) return true;

    std::sort(arr.begin(), arr.end());
    
    int minPos = std::distance(arr.begin(), std::min_element(arr.begin(), arr.end()));
    
    for (int i = 0; i < arr.size(); i++) {
        if ((i != minPos) && (arr[i] == arr[minPos])) return false;
    }
    
    return true;
}
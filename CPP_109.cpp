#include <algorithm>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    std::vector<int> temp(arr);
    std::sort(temp.begin(), temp.end());
    
    for (int i = 0; i < n; i++) {
        arr = temp;
        temp = std::vector<int>(arr.begin() + 1, arr.end());
        temp.push_back(arr[0]);
        
        if (temp == arr) return true;
    }
    
    return false;
}
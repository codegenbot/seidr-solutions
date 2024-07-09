#include <algorithm>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0)
        return true;
    
    std::vector<int> temp = arr;
    for (int i = 0; i < n; i++) {
        std::sort(temp.begin(), temp.end());
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (temp[j] == arr[i]) {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
        std::rotate(temp.begin(), temp.end() - 1, temp.end());
    }
    
    return true;
}
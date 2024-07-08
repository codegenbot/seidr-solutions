#include <algorithm>
namespace std;

int move_one_ball(std::vector<int> arr) {
    if (arr.empty()) return 1; 

    std::vector<int> temp = arr;
    std::sort(temp.begin(), temp.end());

    for (int i = 0; i < arr.size(); i++) {
        bool found = false;
        for (int j = 0; j < temp.size(); j++) {
            if (arr[i] == temp[j]) {
                found = true;
                break;
            }
        }
        if (!found) return 0; 
    }

    return 1; 
}
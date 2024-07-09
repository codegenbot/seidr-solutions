#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int max = 0;
    for (int i : arr) {
        if (i > max)
            max = i;
    }
    
    bool isSorted = true;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[0]) {
            isSorted = false;
            break;
        }
    }
    
    return isSorted;
}
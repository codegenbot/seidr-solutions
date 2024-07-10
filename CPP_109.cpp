#include <algorithm>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0)
        return true;
    
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    
    for (int i = 0; i < n; i++) {
        if (temp[i] != arr[(i + n - 1) % n])
            return false;
    }
    
    return true;
}
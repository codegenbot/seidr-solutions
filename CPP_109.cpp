#include <vector>
#include <cassert>

using namespace std;

bool move_one_ball(const vector<int>& arr) {
    if (arr.empty()) {
        return true;
    }
    
    int n = arr.size();
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    int shift = minIndex;
    for (int i = 0; i < n; i++) {
        int index = (i + shift) % n;
        if (arr[index] < arr[(index + 1) % n]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    assert(move_one_ball({1, 2, 3, 4, 5}) == false);
    assert(move_one_ball({5, 4, 3, 2, 1}) == true);
    assert(move_one_ball({3, 1, 2}) == false);
    return 0;
}
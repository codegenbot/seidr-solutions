#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool move_one_ball(vector<int>& arr) {
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
    assert(move_one_ball(vector<int>()) == true);
    assert(move_one_ball(vector<int>({1, 2, 3, 4})) == false);
    assert(move_one_ball(vector<int>({4, 3, 2, 1})) == true);
    
    cout << "All test cases passed!" << endl;

    return 0;
}
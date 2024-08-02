#include <iostream>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[0]) return true;
    }
    return false;
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << move_one_ball(arr) << endl; // Output: 1
    return 0;
}
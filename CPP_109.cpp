#include <iostream>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    if (move_one_ball(arr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
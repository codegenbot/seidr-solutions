#include <iostream>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    int shift_point = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[(i + 1) % n]) {
            if (shift_point != -1) return false;
            shift_point = i;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {3, 4, 5, 1, 2};
    vector<int> arr2 = {1, 2, 3, 5, 4};
    vector<int> arr3 = {6, 7, 8, 9, 10};
    vector<int> arr4 = {1, 2, 3, 4, 5, 6, 1};

    cout << "Test Case 1: " << move_one_ball(arr1) << endl; // expected output: true
    cout << "Test Case 2: " << move_one_ball(arr2) << endl; // expected output: false
    cout << "Test Case 3: " << move_one_ball(arr3) << endl; // expected output: true
    cout << "Test Case 4: " << move_one_ball(arr4) << endl; // expected output: false

    return 0;
}
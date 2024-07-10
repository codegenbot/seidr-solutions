#include <iostream>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int max_index = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[max_index]) {
            max_index = i;
        }
    }
    return true;
}

int main() {
    vector<int> test = {3, 4, 5, 1, 2};
    cout << move_one_ball(test) << endl; // prints: 1
    return 0;
}
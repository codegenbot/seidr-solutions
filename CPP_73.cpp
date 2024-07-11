#include <vector>
#include <iostream>
#include <climits>
#include <cassert>

int smallest_change(std::vector<int> arr) {
    int min = INT_MAX;
    for (int i : arr) {
        if (i < min)
            min = i;
    }
    return min;
}

int main() {
    using namespace std;
    assert(smallest_change({0, 1}) == 1);
    vector<int> arr(0);
    cout << "Enter the numbers separated by space: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    if(arr.empty()) {
        cout << "Error: No input provided." << endl;
    } else {
        cout << "The smallest change is: " << smallest_change(arr) << endl;
    }
}
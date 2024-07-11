```cpp
#include <initializer_list>
#include <vector>
#include <iostream>
#include <climits>

using namespace std;

int smallest_change(std::vector<int> arr) {
    int min = INT_MAX;
    for (int i : arr) {
        if (i < min)
            min = i;
    }
    return min;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    vector<int> arr;
    cout << "Enter the numbers separated by space: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    cout << "The smallest change is: " << smallest_change(arr) << endl;
    return 0;
}
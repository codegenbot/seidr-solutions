#include <iostream>
#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int min = INT_MAX;
    for (int i : arr) {
        if (i < min)
            min = i;
    }
    return min;
}

int main() {
    vector<int> arr = {0, 1};
    cout << "Smallest change: " << smallest_change(arr) << endl;
    return 0;
}
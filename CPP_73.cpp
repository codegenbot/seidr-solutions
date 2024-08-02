#include <iostream>
#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int left = 0;
    int right = arr.size() - 1;
    int changes = 0;

    while (left <= right) {
        if (arr[left] != arr[right]) {
            int minElement = min(arr[left], arr[right]);
            for (int i = left; i <= right; i++) {
                if (arr[i] < minElement) {
                    minElement = arr[i];
                }
            }
            changes += (right - left + 1) - (minElement == arr[left] ? 0 : 1);
            break;
        } else {
            left++;
            right--;
        }
    }

    return changes;
}

int main() {
    vector<int> arr = {1,2,3,5,4,7,9,6};
    cout << smallest_change(arr) << endl;

    return 0;
}
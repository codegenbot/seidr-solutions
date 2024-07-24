#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < n; i++) {
                if ((i >= left && i <= right) || (i >= right)) {
                    continue;
                }
                if (arr[i] == arr[right]) {
                    swap(arr[i], arr[left]);
                    break;
                }
            }
        }
        left++;
        right--;
    }

    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    // Add more test cases here
    return 0;
}
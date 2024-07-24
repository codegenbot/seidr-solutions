#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = left; i <= right; i++) {
                if (arr[i] == arr[left]) {
                    swap(arr[i], arr[right]);
                    break;
                }
            }
        } else {
            left++;
            right--;
        }
    }

    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    // Add more test cases here
    return 0;
}
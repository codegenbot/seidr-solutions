#include <vector>

int main() {
    vector<int> arr = {3, 2, 1};
    int result = can_arrange(arr);
    cout << "Result: " << result << endl;
}

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}
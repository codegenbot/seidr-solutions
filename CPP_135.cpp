#include <vector>

int can_arrange(vector<int> arr) {
    int largestIndex = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            largestIndex = i - 1;
        }
    }
    return largestIndex;
}

int main() {
    // Test the can_arrange function with appropriate test cases
    // Example test case
    vector<int> arr = {1, 2, 3, 4, 5};
    int result = can_arrange(arr);
    // Print the result
    cout << "Largest Index: " << result << endl;

    return 0;
}
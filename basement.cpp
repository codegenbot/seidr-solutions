#include <vector>
using namespace std;

int basementIndex(const vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    // Example inputs
    vector<int> arr1({1, -1});
    cout << basementIndex(arr1) << endl;  // Output: 0

    vector<int> arr2({1, -100});
    cout << basementIndex(arr2) << endl;  // Output: 0

    vector<int> arr3({2, -1, 100});
    cout << basementIndex(arr3) << endl;  // Output: 0

    vector<int> arr4({2, -95, 100});
    cout << basementIndex(arr4) << endl;  // Output: 0

    vector<int> arr5({2, -30, 5});
    cout << basementIndex(arr5) << endl;  // Output: 0
    return 0;
}
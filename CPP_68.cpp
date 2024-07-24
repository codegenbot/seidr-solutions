#include <vector>
#include <iostream>
#include <climits>
#include <limits>

using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;

    if (arr.empty()) return vector<int>();

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back(minEven);
    }

    return result;
}

int start() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    vector<int> output = pluck(arr);

    for (const auto& num : output) {
        cout << "Number: " << num << endl;
    }
    return 0;
}
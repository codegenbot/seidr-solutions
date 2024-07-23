#include <vector>
#include <utility>
#include <climits>
#include <iostream>
using namespace std;

vector<pair<int, int>> result(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    pair<int, int> smallest_even = make_pair(INT_MAX, -1);

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even.first) {
            smallest_even = make_pair(arr[i], i);
        }
    }

    result.push_back(smallest_even);
    return result;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        arr.push_back(num);
    }

    vector<pair<int, int>> output = result(arr);

    if (!output.empty()) {
        for (auto p : output) {
            cout << "Number: " << p.first << ", Index: " << p.second << endl;
        }
    } else {
        cout << "No even numbers found." << endl;
    }

    return 0;
}
#include <vector>
#include <pair>
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
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}
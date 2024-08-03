#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestEven != INT_MAX) {
        result.push_back({smallestEven, smallestIndex});
    } else {
        result.push_back({};
    }

    return result;
}

int main() {
    vector<int> arr = {4, 2, 3};
    vector<pair<int, int>> output = pluck(arr);
    for (auto p : output) {
        cout << "{ " << p.first << ", " << p.second << " }" << endl;
    }
    return 0;
}
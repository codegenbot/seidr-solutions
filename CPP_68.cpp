#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {};

    int smallest_even = INT_MAX;
    int index = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }

    if (smallest_even == INT_MAX) return {};

    result.push_back({smallest_even, index});
    return result;
}

int main() {
    vector<pair<int, int>> output = pluck({7, 9, 7, 1});
    cout << "{";
    for (pair<int, int> p : output) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "}" << endl;
    return 0;
}
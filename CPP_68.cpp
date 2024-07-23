#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(int i) {
    return i % 2 == 0;
}

int pluck(const vector<int>& v) {
    int result = 0;
    for (int x : v) {
        if (!issame(x)) {
            result += x;
        }
    }
    return result;
}

vector<pair<int, int>> result(vector<int> arr) {
    vector<pair<int, int>> output;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            output.emplace_back(arr[i], i);
        }
    }
    return {make_pair(pluck(arr), -1)};
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}
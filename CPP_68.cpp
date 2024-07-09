#include <initializer_list>
#include <vector>
#include <cassert>
#include <iostream>
#include <limits>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;

    if (arr.empty()) return result;

    int minEven = numeric_limits<int>::max();
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEven);
    result.push_back(minIndex);

    return result;

}

int mainFunction() {
    vector<int> input;
    cout << "Enter numbers (space separated): ";
    for (int i; cin >> i; ) {
        input.push_back(i);
    }
    vector<int> output = pluck(input);
    assert(issame({0}, pluck({7, 9, 7, 1})));
    cout << "Output: ";
    for (int i : output) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool isSame(const vector<int>& a, const vector<int>& b) {
    if (a == b)
        return true;
    else
        return false;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    while (k--) {
        int max_val = *max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        arr.erase(remove(arr.begin(), arr.end(), max_val), arr.end());
    }
    return result;
}

int main() {
    vector<int> input = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;

    if (!input.empty()) {
        for (int i : maximum(input, k)) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No elements left" << endl;
    }

    return 0;
}
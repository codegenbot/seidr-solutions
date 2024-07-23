```cpp
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> output;
    for (int i = 0; i < arr.size(); i++) {
        output.push_back({arr[i], i});
    }
    return output;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = pluck(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}
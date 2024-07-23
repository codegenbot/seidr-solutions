```
#include <iostream>
#include <vector>
#include <utility>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) 
            return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> output;
    for (int i = 0; i < arr.size(); i++) {
        pair<int, int> p = make_pair(arr[i], i);
        output.push_back(p);
    }
    return output;
}

vector<pair<int, int>> result(vector<int> arr) {
    vector<pair<int, int>> output = pluck(arr);
    for (int i = 0; i < output.size(); i++) {
        for (int j = i + 1; j < output.size(); j++) {
            if (!issame({output[i].first}, {output[j].first})) {
                swap(output[i], output[j]);
                break;
            }
        }
    }
    return output;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}
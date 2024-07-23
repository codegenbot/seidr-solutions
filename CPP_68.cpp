#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<int> res;
    int i = 0, j = 1;
    while(i < arr.size() && j < arr.size()) {
        if(issame({arr[i], arr[j]}, {arr[0], arr[1]})) {
            res.push_back(arr[i]);
            i++;
        }
        j++;
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = {{},{}};
    
    if (!arr.empty()) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j <= i + 3 && j < arr.size(); j++) {
                if (issame({arr[i], arr[j]}, {arr[0], arr[1]})) {
                    output.push_back({{arr[i], arr[j]},j});
                }
            }
        }
    }

    for (auto p : output) {
        cout << "Number: " << p.first.first << ", Index: " << p.second << endl;
    }
    
    return 0;
}
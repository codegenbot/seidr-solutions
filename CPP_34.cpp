```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> res;
    for (int i : l) {
        if (find(res.begin(), res.end(), i) == res.end()) {
            res.push_back(i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

vector<int> mainFunction() {
    int n;
    vector<int> l;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cout << "Enter element " << i + 1 << ": ";
        cin >> temp;
        l.push_back(temp);
    }
    vector<int> result = unique(l);
    return result;
}
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back(i);
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> output;
    for (int i : result) {
        output.push_back(names[i - 1]);
    }
    return output;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<string> result = by_length(arr);

    bool same = true;
    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    }
    vector<string> result2 = by_length(arr2);

    if(issame(result, result2))
        cout << "Same" << endl;
    else
        cout << "Not Same" << endl;

    return 0;
}
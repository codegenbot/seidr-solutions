```cpp
#include <iostream>
#include <vector>
using namespace std;

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
    vector<int> arr = {5, 9, 8, 2, 4};
    vector<string> result = by_length(arr);
    bool same = issame(result, {"Nine", "Eight", "Five"});
    if (same)
        cout << "The output is the same." << endl;
    else
        cout << "The output is not the same." << endl;
    return 0;
}
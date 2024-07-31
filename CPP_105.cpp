#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

string intToWord(int n) {
    string words[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    return words[n - 1];
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            result.push_back(intToWord(i));
        }
    }

    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> arr = {9, 4, 8};
    vector<string> res = by_length(arr);
    assert(issame(res, {"Nine", "Four", "Eight"}));
    cout << "Test passed" << endl;
    return 0;
}
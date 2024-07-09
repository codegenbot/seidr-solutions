#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<vector<string>> b) {
    if (a.size() != b[0].size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[0][i]) {
            return false;
        }
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            if (i == 1) temp.push_back("One");
            else if (i == 2) temp.push_back("Two");
            else if (i == 3) temp.push_back("Three");
            else if (i == 4) temp.push_back("Four");
            else if (i == 5) temp.push_back("Five");
            else if (i == 6) temp.push_back("Six");
            else if (i == 7) temp.push_back("Seven");
            else if (i == 8) temp.push_back("Eight");
            else if (i == 9) temp.push_back("Nine");
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    return temp;
}

int main() {
    vector<int> input = {1, 4, 8};
    vector<string> output = by_length(input);
    
    if (issame({{"One", "Four", "Eight"}}, {{output}})) {
        for (string str : output) {
            cout << str << endl;
        }
    } else {
        cout << "Output is incorrect." << endl;
    }
}
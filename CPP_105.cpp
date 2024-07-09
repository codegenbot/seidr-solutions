#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a) {
    if (a.size() == 0) {
        return true;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] != a[i]) {
            return false;
        }
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(to_string(i));
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    vector<string> result;
    for (string str : temp) {
        result.push_back(str);
    }

    return result;
}

int main() {
    vector<int> input = {1, 4, 8};
    vector<string> output = by_length(input);
    
    if (issame({{"One", "Four", "Eight"}})) {
        for (string str : output) {
            cout << str << endl;
        }
    } else {
        cout << "Output is incorrect." << endl;
    }
}
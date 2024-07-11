```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string str;
            switch (num) {
                case 1:
                    str = "One";
                    break;
                case 2:
                    str = "Two";
                    break;
                case 3:
                    str = "Three";
                    break;
                case 4:
                    str = "Four";
                    break;
                case 5:
                    str = "Five";
                    break;
                case 6:
                    str = "Six";
                    break;
                case 7:
                    str = "Seven";
                    break;
                case 8:
                    str = "Eight";
                    break;
                case 9:
                    str = "Nine";
                    break;
            }
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {1, 3, 5, 2, 4, 9};
    vector<string> res = by_length(arr);
    for (string str : res) {
        cout << str << endl;
    }
    if (issame({res}, {"Nine", "Five", "Four", "Three", "Two", "One"})) {
        cout << "Same" << endl;
    } else {
        cout << "Not Same" << endl;
    }
    
    return 0;
}
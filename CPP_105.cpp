#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
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
    for (string s : temp) {
        string t = "";
        switch (stoi(s)) {
            case 1:
                t = "One";
                break;
            case 2:
                t = "Two";
                break;
            case 3:
                t = "Three";
                break;
            case 4:
                t = "Four";
                break;
            case 5:
                t = "Five";
                break;
            case 6:
                t = "Six";
                break;
            case 7:
                t = "Seven";
                break;
            case 8:
                t = "Eight";
                break;
            case 9:
                t = "Nine";
                break;
        }
        result.push_back(t);
    }
    return result;
}
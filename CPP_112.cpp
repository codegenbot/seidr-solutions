vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += x;
        }
    }
    result.push_back(temp);
    string reverseTemp = "";
    for (int i = temp.length() - 1; i >= 0; i--) {
        reverseTemp += temp[i];
    }
    vector<string> v1 = splitString(temp);
    vector<string> v2 = splitString(reverseTemp);
    if (issame(v1, v2)) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

vector<string> splitString(string s) {
    vector<string> vec;
    string temp = "";
    for (char x : s) {
        if (x == ' ') {
            vec.push_back(temp);
            temp = "";
        } else {
            temp += x;
        }
    }
    vec.push_back(temp);
    return vec;
}
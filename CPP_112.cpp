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
    if (temp == reverseTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}
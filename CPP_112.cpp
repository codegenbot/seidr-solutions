vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    result.push_back(temp);
    
    string reverseTemp = "";
    for (int i = temp.length() - 1; i >= 0; --i) {
        reverseTemp += temp[i];
    }
    
    if (temp == reverseTemp)
        result.push_back("True");
    else
        result.push_back("False");
    
    return result;
}
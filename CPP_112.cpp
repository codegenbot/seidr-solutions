vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool flag = false;
        for (char cc : c) {
            if (ch == cc) {
                flag = true;
                break;
            }
        }
        if (!flag)
            temp += ch;
    }
    result.push_back(temp);
    string revTemp = "";
    for (int i = temp.length() - 1; i >= 0; i--) {
        revTemp += temp[i];
    }
    if (temp == revTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}
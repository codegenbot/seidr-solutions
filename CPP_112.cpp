Here is the completed code:

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
        if (!flag) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string rev_temp = temp;
    reverse(rev_temp.begin(), rev_temp.end());
    if (temp == rev_temp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}
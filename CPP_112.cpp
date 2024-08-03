vector<string> reverse_delete(string s, string c) {
    vector<string> output;
    string temp = s;
    sort(temp.begin(), temp.end());
    if (temp == s) {
        output.push_back("True");
    } else {
        output.push_back("False");
    }
    temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    output.push_back(temp);
    reverse(temp.begin(), temp.end());
    output.push_back(string(1, temp[0]));
    return output;
}
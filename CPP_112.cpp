vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    vector<string> output;
    output.push_back(result);
    string temp = result;
    reverse(temp.begin(), temp.end());
    if (temp == result) {
        output.push_back("True");
    } else {
        output.push_back("False");
    }
    return output;
}
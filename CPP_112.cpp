vector<string> reverse_delete(string s, string c) {
    vector<string> output;
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
    output.push_back(result);
    string temp = result;
    reverse(temp.begin(), temp.end());
    bool same = (temp == result);
    output.push_back(to_string(same));
    return output;
}
Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char c_s : s) {
        bool found = false;
        for (char c_c : c) {
            if (c_s == c_c) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += c_s;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> output = {result, (temp == result ? "True" : "False")};
    return output;
}
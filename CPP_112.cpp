Here is the solution:

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char c : s) {
        bool found = false;
        for (char d : c) {
            if (c == d) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += c;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    return {result, temp == s ? "True" : "False"};
}
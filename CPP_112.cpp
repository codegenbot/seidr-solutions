Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += x;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> output = {result, (temp == result ? "True" : "False")};
    return output;
}
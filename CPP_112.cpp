Here is the solution:

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
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    vector<string> output;
    output.push_back(result);
    output.push_back((result == reversed) ? "True" : "False");
    return output;
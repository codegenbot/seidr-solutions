Here is the completed code:

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
    string reversed = "";
    for (int i = result.length() - 1; i >= 0; i--) {
        reversed += result[i];
    }
    output.push_back(result);
    output.push_back((result == reversed) ? "True" : "False");
    return output;
}
Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
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
    result.push_back(temp);
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());
    if (temp == reversed) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
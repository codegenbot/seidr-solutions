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
    string revResult = result;
    reverse(revResult.begin(), revResult.end());
    vector<string> output;
    output.push_back(result);
    if (result == revResult) {
        output.push_back("True");
    } else {
        output.push_back("False");
    }
    return output;
}
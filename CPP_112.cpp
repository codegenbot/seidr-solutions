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
    
    string reverseResult = "";
    for(int i = result.size() - 1; i >= 0; i--) {
        reverseResult += result[i];
    }

    vector<string> output;
    output.push_back(result);
    if (result == reverseResult) {
        output.push_back("True");
    } else {
        output.push_back("False");
    }
    
    return output;
}
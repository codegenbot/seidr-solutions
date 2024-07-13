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
    
    string palindromeCheck = temp;
    reverse_copy(palindromeCheck.begin(), palindromeCheck.end(), temp.begin());
    
    result.push_back(temp);
    if (palindromeCheck == temp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}
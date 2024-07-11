vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (char ch : s) {
        bool deleteChar = false;
        for (char cc : c) {
            if (ch == cc) {
                deleteChar = true;
                break;
            }
        }
        
        if (!deleteChar) {
            temp += ch;
        }
    }
    
    string reverseTemp = temp;
    reverse(temp.begin(), temp.end());
    result.push_back(temp);
    
    if (temp == reverseTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}
Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<char> cArray(c.begin(), c.end());
    string result;
    
    for (char& ch : s) {
        bool deleteChar = false;
        for (char& cc : cArray) {
            if (ch == cc) {
                deleteChar = true;
                break;
            }
        }
        
        if (!deleteChar)
            result += ch;
    }
    
    string temp = result;
    reverse(temp.begin(), temp.end());
    
    vector<string> res;
    res.push_back(result);
    res.push_back((temp == result) ? "True" : "False");
    
    return res;
}
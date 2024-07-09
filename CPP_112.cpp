Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            temp += s[i];
        }
    }
    
    string strRev = "";
    for(int i=temp.length()-1; i>=0; i--) {
        strRev+=temp[i];
    }

    if (strRev == temp) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    
    return result;
}
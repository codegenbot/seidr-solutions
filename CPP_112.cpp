```
bool issame(char ch1, char ch2) {
    if(ch1 >= 'a' && ch1 <= 'z') 
        ch1 = (ch1 - 'a' + 26)%26 + 'a';
    else if(ch1 >= 'A' && ch1 <= 'Z')
        ch1 = (ch1 - 'A' + 26)%26 + 'A';
    if(ch2 >= 'a' && ch2 <= 'z') 
        ch2 = (ch2 - 'a' + 26)%26 + 'a';
    else if(ch2 >= 'A' && ch2 <= 'Z')
        ch2 = (ch2 - 'A' + 26)%26 + 'A';
    return ch1 == ch2;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    if (issame(temp[0],temp[temp.size()-1])) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

string reverse(string s) {
    string rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}
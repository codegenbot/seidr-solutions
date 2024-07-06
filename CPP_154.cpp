bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        if(temp.length() >= b.length()) {
            if(a.find(b) != string::npos || a.find(temp) != string::npos) {
                return true;
            }
        } else {
            for(int j = 0; j < temp.length(); j++) {
                temp = temp.substr(j) + temp.substr(0, j);
                if(a.find(temp) != string::npos) {
                    return true;
                }
            }
        }
    }
    return false;
}
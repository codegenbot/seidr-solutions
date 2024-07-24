bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        int j = 0;
        while(j < temp.length()) {
            if(temp.substr(j).find(b) != string::npos) {
                return true;
            }
            j++;
        }
    }
    return false;
}
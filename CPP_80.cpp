bool is_happy(string s) {
    for(int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        int count[26] = {0};
        for (char c : sub) {
            count[c-'a']++;
        }
        bool is_happy = true;
        for(int j = 0; j < 26; j++) {
            if(count[j] > 1) {
                is_happy = false;
                break;
            } else if(count[j] == 1 && sub.find((char)(j+'a')) != string::npos) {
                is_happy = false;
                break;
            }
        }
        if(!is_happy)
            return false;
    }
    return true;
}
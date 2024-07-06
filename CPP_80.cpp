bool is_happy(string s) {
    if (s.length() < 3) return false;
    for (int i = 0; i <= s.length()-3; i++) {
        string temp = s.substr(i, 3);
        int count = 1;
        for (int j = i+1; j <= s.length(); j++) {
            if (s.substr(j-1, 1) == temp[0] || 
                s.substr(j-1, 1) == temp[1] || 
                s.substr(j-1, 1) == temp[2]) 
                count++;
            else break;
        }
        if (count == 3) return true;
    }
    return false;
}
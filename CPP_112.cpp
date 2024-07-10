string reverse_delete(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    for(int i = 0; i < len2; i++) {
        auto pos = s1.find(s2[i]);
        while(pos != string::npos) {
            s1 = s1.substr(0, pos) + s1.substr(pos + 1);
            pos = s1.find(s2[i]);
        }
    }
    if(s1.empty())
        return "";
    reverse(s1.begin(), s1.end());
    return s1;
}
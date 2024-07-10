```cpp
string reverse_delete(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    for(int i = 0; i < len2; i++) {
        auto pos = s1.find(s2[i]);
        while(pos != string::npos) {
            s1.replace(pos, 1, "");
            pos = s1.find(s2[i]);
        }
    }
    reverse(s1.begin(), s1.end());
    return s1;
}
string file_name_check(string s) {
    int digitCount = 0;
    bool foundDot = false;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= '0' && c <= '9'){
            digitCount++;
        }else if(c == '.'){
            foundDot = true;
        }else if(foundDot){
            if(s.length() < 4) {
                return "No";
            }
            string extension = s.substr(i, s.find_last_of('.') - i);
            if(s.length() < i+extension.length() || extension != "txt" && extension != "exe" && extension != "dll"){
                return "No";
            }
        }
    }
    if(digitCount > 3 || !foundDot) return "No";
    if(s[0] < 'a' || s[0] > 'z' && s[0] < 'A' || s[0] > 'Z') return "No";
    return "Yes";
}
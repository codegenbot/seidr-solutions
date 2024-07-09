bool is_happy(string s){
    return (s.length() < 3) ? false : !((s[0] == s[1]) || (s[1] == s[2]) || (s[0] == s[2])); 
}
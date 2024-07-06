int main() {
    string s;
    cin >> s;
    cout << (is_happy(s) ? "true" : "false") << endl;
    return 0;
}

bool is_happy(string s){
    if(s.length() < 3)
        return false;
    for(int i = 0; i < s.length()-2; i++){
        bool unique = true;
        for(int j = i+1; j <= i+2; j++){
            if(s[j] == s[i])
                unique = false;
        }
        if(!unique)
            return false;
    }
    return true;
}
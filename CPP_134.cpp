int main(){
    string txt;
    cin >> txt;
    cout << (check_if_last_char_is_a_letter(txt) ? "true" : "false");
}
bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;
    for(int i = 0; i < txt.length() - 1; i++){
        if(isspace(txt[i]))
            return false;
    }
    char lastChar = txt.back();
    if(isalpha(lastChar))
        return true;
    return false;
}
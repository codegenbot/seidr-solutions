Here is the completed code:

bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty())
        return false;
    string last_char = txt.substr(txt.length() - 1);
    return (last_char.length() == 1 && isalpha(last_char[0]));
}
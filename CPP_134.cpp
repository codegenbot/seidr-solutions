int main()
{
    string txt;
    cout<<"Enter a string: ";
    cin>>txt;
    if(check_if_last_char_is_a_letter(txt))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}

bool check_if_last_char_is_a_letter(string txt){
    if(txt.length()==0)
        return false;

    int i = txt.find_last_of(' ');
    if(i == string::npos || i==txt.length()-1)
        return isalpha(txt.back());
    
    return isalpha(txt[txt.length()-1]);
}
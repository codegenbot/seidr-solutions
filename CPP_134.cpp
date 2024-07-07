int main()
{
    string txt;
    cout << "Enter a string: ";
    cin >> txt;
    
    bool result = check_if_last_char_is_a_letter(txt);
    
    if(result)
        printf("The last character of the string is an alphabetical character and is not a part of a word.\n");
    else
        printf("The last character of the string is not an alphabetical character or it is a part of a word.\n");
    
    return 0;
}
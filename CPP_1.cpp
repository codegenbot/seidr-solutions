int main 
{
    string s;

    while (true) {
        cout << "Enter a string: ";
        if (!(cin >> s)) { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            break; 
        }
    }
    assert(issame(separate_paren_groups("( ) (( )) (( )( )"), {"", "(())", "(()())"}));
    cout << "Result: " << separate_paren_groups(s) << endl;
    return 0;
}
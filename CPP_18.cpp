int main_function() { 
    string str, substring;

    while(true) {
        cout << "Enter the string: ";
        getline(cin, str);

        if (!str.empty()) break;
        cout << "Error: The input string is empty. Please try again." << endl;
    }

    while(true) {
        cout << "Enter substring: ";
        getline(cin, substring);

        if (!substring.empty()) break;
        cout << "Error: The input substring is empty. Please try again." << endl;
    }
    
    while((str.empty() || substring.empty())) {
        if (str.empty()) 
            cout << "Error: The input string is empty. Please try again." << endl;
        else
            cout << "Error: The input substring is empty. Please try again." << endl;

        cout << "Enter the string: ";
        getline(cin, str);

        if (!str.empty()) break;
        cout << "Enter substring: ";
        getline(cin, substring);
    }

    int result = how_many_times(str, substring);
    cout << "The substring appears " << result << " times." << endl;

    return 0;
}
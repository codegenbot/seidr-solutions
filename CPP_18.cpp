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
    
    if(str.empty() || substring.empty()){
        cout << "Error: No string or substring entered." << endl;
    } else {
        int result = how_many_times(str, substring);
        cout << "The substring appears " << result << " times." << endl;
    }

    return 0;
}
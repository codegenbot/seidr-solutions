#include <iostream>
using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        pos = str.find(substring, pos);
    }
    return count;

}

int main_function() { 
    string str, substring;

    cout << "Enter the string: ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Error: The input string is empty." << endl;
        getline(cin, str); // Read again in case of error
    } else {
        cout << "Enter substring: ";
        getline(cin, substring);
        
        if (substring.empty()) {
            cout << "Error: The input substring is empty." << endl;
            getline(cin, substring); // Read again in case of error
        } else {
            int result = how_many_times(str, substring);
            cout << "The substring appears " << result << " times." << endl;
        }
    }

    return 0;
}
```cpp
#include <string>
#include <iostream>

using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)).size() != 0) {
        count++;
        pos += substring.length();
    }
    return count;
}

int main() { 
    string str;
    cout << "Enter the string: ";
    if (!(cin >> str).fail()) {
        getline(cin, str);
    } else {
        cout << "Error: The input is invalid." << endl;
    }

    string substring;
    cout << "Enter substring: ";
    if (!(cin >> substring).fail()) {
        getline(cin, substring);
    } else {
        cout << "Error: The input is invalid." << endl;
    }
    
    if (str.empty()) {
        cout << "Error: The input string is empty." << endl;
    } else if (substring.empty()) {
        cout << "Error: The input substring is empty." << endl;
    } else {
        int result = how_many_times(str, substring);
        cout << "The substring appears " << result << " times." << endl;
    }
    return 0;
}
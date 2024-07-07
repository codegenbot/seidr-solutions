```c++
#include <iostream>
using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        pos = str.find(substring, pos + 1);
    }
    return count;

}

int main_function() { 
    string str, substring;

    cout << "Enter the string: ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Error: The input string is empty." << endl;
    } else {
        cout << "Enter substring: ";
        getline(cin, substring);
        
        if (substring.empty()) {
            cout << "Error: The input substring is empty." << endl;
        } else {
            int result = how_many_times(str, substring);
            cout << "The substring appears " << how_many_times(str, substring) << " times." << endl;
        }
    }

    return 0;
}
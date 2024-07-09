#include <string>
#include <cassert>
#include <iostream>

using namespace std;

int how_many_times(string& str, string& substring) {
    int count = 0;
    size_t pos = 0;
    
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(0, pos + substring.length());
    }
    return count;

}

int main() {
    string str, substring;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a substring: ";
    getline(cin, substring);
    
    if (str.find(substring) == string::npos) {
        cout << "The substring is not found in the string.\n";
    } else {
        cout << "The substring appears " << how_many_times(str, substring) << " times.\n";
    }
    return 0;
}
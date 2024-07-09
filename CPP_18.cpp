#include <string>
#include <cassert>
#include <iostream>

using namespace std;

int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    size_t original_len = str.length();
    
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(0, pos + substring.length());
        original_len -= (pos + substring.length());
    }
    return count;

}

int main() {
    string str, substring;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter a substring: ";
    cin >> substring;
    
    if (str.find(substring) == string::npos) {
        cout << "Error: The substring is not found in the string.\n";
    } else {
        int result = how_many_times(str, substring);
        cout << "The substring appears " << result << " times.\n";
    }
}
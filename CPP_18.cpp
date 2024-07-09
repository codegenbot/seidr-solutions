#include <string>
#include <cassert>
#include <iostream>
#include <limits>

using namespace std;

int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    size_t original_len = str.length();
    
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        original_len -= (pos + substring.length());
    }
    return count;

}

int main() {
    string str, substring;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a substring: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, substring);
    
    if (str.find(substring) == string::npos) {
        cout << "The substring is not found in the string.\n";
    } else {
        cout << "The substring appears " << how_many_times(str, substring) << " times.\n";
    }
    return 0;
}
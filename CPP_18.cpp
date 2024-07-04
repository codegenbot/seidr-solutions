#include <iostream>
#include <string>
using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = str.find(substring);
    while (pos != string::npos) {
        count++;
        pos = str.find(substring, pos + substring.length());
    }
    return count;
}

int main() {
    string str, substring;
    cout << "Enter the main string: ";
    getline(cin, str);
    cout << "Enter the substring: ";
    getline(cin, substring);
    cout << "The substring occurs " << how_many_times(str, substring) << " times." << endl;
    return 0;
}
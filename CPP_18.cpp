#include <string>

int main() {
    int count = 0;
    size_t pos = 0;

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string substring;
    cout << "Enter a substring: ";
    getline(cin, substring);

    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(pos, substring.length());
    }

    cout << "The substring appears " << count << " times in the given string." << endl;
    return 0;
}
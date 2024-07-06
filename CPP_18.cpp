#include <string>

int main() {
    int count = 0;
    size_t pos = 0;

    string str;
    cout << "Enter a string: ";
    cin >> str;

    string substring;
    cout << "Enter a substring: ";
    cin >> substring;

    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(pos, substring.length());
    }

    cout << "The substring appears " << count << " times." << endl;

    return 0;
}
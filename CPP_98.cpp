#include <iostream>
#include <string>
using namespace std;

int count_upper(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && isupper(s[i])) && 
            (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int result = count_upper(str);
    cout << "Number of uppercase vowels at even positions is: " << result << endl;
    return 0;
}
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
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int result = count_upper(input);
    cout << "The number of uppercase vowels at even positions is: " << result << endl;
    return 0;
}
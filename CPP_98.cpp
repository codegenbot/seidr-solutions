#include <string>
#include <cctype>

int count_upper(string s) {
    int count = 0;
    for(int i = 1; i < s.size(); i += 2) {
        if(isupper(s[i])) {
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
    cout << "Number of uppercase characters: " << result << endl;
    return 0;
}
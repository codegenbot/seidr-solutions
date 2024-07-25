```
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'A' && c <= 'Z') {
                c = tolower(c);
            }
        } else {
            c = tolower(c);
        }
        result += c;
    }
    reverse(result.begin(), result.end());
    cout << "The modified string is: " << result << endl;
    return 0;
}
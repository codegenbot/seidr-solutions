```cpp
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    reverse(result.begin(), result.end());
    cout << "The result is: " << result << endl;
}
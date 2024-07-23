```cpp
#include <string>
using namespace std;

int count_upper(string s) {
    int count = 0;
    for (int i = 1; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'I' && s[i] <= 'O') || (s[i] >= 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);
    int result = count_upper(userInput);
    cout << "Number of uppercase letters: " << result << endl;
    return 0;
}
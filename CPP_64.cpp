#include <string>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.back() == 'y')) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    int result = vowels_count(input);
    cout << "Number of vowels: " << result << endl;
    return 0;
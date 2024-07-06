```cpp
#include <string>
using namespace std;

std::string flip_case(std::string str) {
    string result = "";
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string output = flip_case(input);
    cout << "Flipped case string: " << output << endl;
}
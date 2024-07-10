```c++
#include <string>
using namespace std;

int main() {
    string input = "Hello World!";
    cout << solve(input) << endl;
    return 0;
}

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(s).reverse() : result;
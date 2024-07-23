#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "The number of uppercase letters in the given string is: " << count_upper(s);
    return 0;
}
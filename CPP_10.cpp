```cpp
#include <string>
using namespace std;

void make_palindrome_to(string &output, string input) {
    int left = 0;
    for (int right = input.length() - 1; right >= 0; --right) {
        if (left <= right && input[left] != input[right])
            return;
        output += input[left];
        ++left;
    }
}

int main() {
    string input, result;
    cout << "Enter a string: ";
    cin >> input;
    make_palindrome_to(result, input);
    cout << "Palindrome of the given string is: " << result << endl;
    return 0;
}
```cpp
#include <string>
using namespace std;

void make_palindrome_to(string &output, string input) {
    int i = 0;
    int j = input.size() - 1;
    
    while (j >= i) {
        if (i != j)
            output += input[i++];
        output += input[j--];
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string result;
    make_palindrome_to(result, input);
    cout << "Palindrome of the given string is: " << result << endl;
    return 0;
}
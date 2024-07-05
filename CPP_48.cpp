#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string text){
    int left = 0;
    int right = text.length() - 1;
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << boolalpha << is_palindrome(input) << endl;
    return 0;
}
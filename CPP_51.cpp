#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string remove_vowels(string text) {
    string vowels = "aeiouAEIOU";
    text.erase(remove_if(text.begin(), text.end(), [&](char c) {
        return vowels.find(c) != string::npos;
    }), text.end());
    return text;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "String without vowels: " << remove_vowels(input) << endl;
    return 0;
}
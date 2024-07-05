#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string remove_vowels(string text) {
    string vowels = "aeiouAEIOU";
    text.erase(remove_if(text.begin(), text.end(), [&](char c){ return vowels.find(c) != string::npos; }), text.end());
    return text;
}

int main() {
    string input;
    getline(cin, input); // Read entire line of text
    cout << remove_vowels(input) << endl; // Output the modified string
    return 0;
}
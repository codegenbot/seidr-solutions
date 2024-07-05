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
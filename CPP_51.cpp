#include <iostream>
#include <string>
#include <cstring>
#include <cassert>

using namespace std;

string remove_vowels(string text) {
    string result;
    for(char c : text) {
        if(!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert (remove_vowels("ybcd") == "ybcd");
    assert (remove_vowels("hello") == "hll");
    assert (remove_vowels("AEIOUaeiou") == "");
    cout << "All tests passed!\n";
    return 0;
}
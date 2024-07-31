#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        sort(word.begin(), word.end());
        result += word;
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    // Additional test cases can be added here

    return 0;
}
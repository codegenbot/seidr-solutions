#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string original_order(string s) {
    string result = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end(), greater<char>());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end(), greater<char>());
    result += word;
    return result;
}

int main() {
    assert(original_order("Hi. My name is Mister Robot. How are you?") == ".iH My eman si retsiM .toboR woH era ?uoy");
    return 0;
}
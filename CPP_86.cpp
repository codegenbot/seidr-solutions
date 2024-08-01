#include <algorithm>
#include <iostream>
#include <string>
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
    assert (original_order("Hi. My name is Mister Robot. How are you?") == ".iH yM aemn si retsiM .toRbo HoW era ?uoy");
    return 0;
}
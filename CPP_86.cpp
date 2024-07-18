#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s);

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") ==
        ".Hi .My aemn is eMrist .Rtboo How aer ?ouy");
    return 0;
}

string anti_shuffle(string s) {
    string result = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}
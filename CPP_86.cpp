#include <iostream>
#include <algorithm>
#include <string>
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
    sort(word.begin(), word.end());
    result += word;
    return result;
}

int main() {
    string test_case = "pemogrma test cpp cmotest";
    string result = anti_shuffle(test_case);
    cout << result << endl;

    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") ==
           ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}
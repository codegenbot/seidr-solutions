#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string orderedString = "";
    string word = "";

    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            orderedString += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }

    sort(word.begin(), word.end());
    orderedString += word;

    return orderedString;
}
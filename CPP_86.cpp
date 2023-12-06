
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            result += sort(s[i], s[i] + 1);
        } else {
            result += " ";
        }
    }
    return result;
}
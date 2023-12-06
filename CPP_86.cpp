#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            int j = i + 1;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > s[i]) {
                    swap(s[i], s[j]);
                }
                j++;
            }
        }
    }
    return result;
}
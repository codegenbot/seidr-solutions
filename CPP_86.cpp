#include <algorithm>
#include <string>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    string temp = "";

    for (char c : s) {
        if (c == ' ') {
            result += temp;
            temp = "";
            result += ' ';
        } else {
            temp += c;
        }
    }

    result += temp;

    for (int i = 0; i < result.length(); i++) {
        char c = result[i];
        bool found = false;
        for (char d : result) {
            if (d < c) {
                c = d;
                found = true;
                break;
            }
        }
        if (!found) {
            c = ' ';
        }

        while (result[i] != c) {
            temp += result[i];
            i++;
        }
    }

    return temp;
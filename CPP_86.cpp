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

    string output = "";
    int minChar = 0;
    for (int i = 0; i < result.length(); i++) {
        char c = result[i];
        bool found = false;
        for (char d : result) {
            if ((int)d < (int)c && !found) {
                minChar = (int)d;
                found = true;
            }
        }
        while (result[i] != minChar) {
            output += result[i];
            i++;
        }
    }

    return output;
}
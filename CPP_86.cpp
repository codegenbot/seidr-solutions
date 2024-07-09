#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    string temp = "";

    for (char c : s) {
        if (c == ' ') {
            result += temp + " ";
            temp = "";
        } else {
            temp += c;
        }
    }

    result += temp;

    for (int i = 0; i < result.length(); i++) {
        char c = result[i];
        bool first = true;
        for (int j = i + 1; j < result.length(); j++) {
            if (result[j] <= c) {
                c = result[j];
                first = false;
            }
        }
        if (!first) {
            temp += c;
        } else {
            temp += result[i];
        }
    }

    return temp;
}
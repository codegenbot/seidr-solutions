#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string temp = "";
    for (char c : test) {
        if (c == ' ') {
            if (!temp.empty()) {
                if (result.find(temp[0]) == result.end() || result[temp[0]] < 1) {
                    result[temp[0]] = 1;
                } else {
                    result[temp[0]]++;
                }
                temp.clear();
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        if (result.find(temp[0]) == result.end() || result[temp[0]] < 1) {
            result[temp[0]] = 1;
        } else {
            result[temp[0]]++;
        }
    }

    return result;
}
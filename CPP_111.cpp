#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = test + " ";
    char prevChar = str[0];
    int count = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (result.find(prevChar) == result.end()) {
                result[prevChar] = count;
            } else {
                result[prevChar]++;
            }
            prevChar = str[i];
            count = 1;
        } else if (str[i] != prevChar) {
            prevChar = str[i];
            count = 1;
        } else {
            count++;
        }
    }

    return result;
}
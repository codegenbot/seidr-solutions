#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string word;
    for (char c : test) {
        if (c == ' ') {
            word = "";
        } else {
            word += c;
            if (!result.count(c)) {
                result[c] = 1;
            } else {
                result[c]++;
            }
        }
    }
    return result;
}
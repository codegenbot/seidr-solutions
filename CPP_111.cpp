#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique(letters)) {
        int count = 0;
        size_t pos = 0;
        while ((pos = letters.find(c, pos)) != string::npos) {
            count++;
            pos++;
        }
        if (count > 0) result[c] = count;
    }

    return result;
}
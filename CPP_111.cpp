#include <map>
#include <cassert>
#include <string>

using namespace std;

map<char, int> histogram(const string& str) {
    map<char, int> result;
    for (char c : str) {
        result[c]++;
    }
    return result;
}

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

assert(issame(map<char, int>{{'a', 1}}, map<char, int>{{'a', 1}}));

histogram(string("a"));

return 0;
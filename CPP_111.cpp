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

int main() {
    assert(issame(map<char, int>{{'a', 1}}, {{'a', 1}}));
    assert(issame(histogram(string("a")), {{'a', 1}}));
    return 0;
}
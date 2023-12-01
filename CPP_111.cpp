#include <cassert>
#include <map>

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> counts;
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            counts[letter]++;
            letter = "";
        }
    }
    if (!letter.empty()) counts[letter]++;
    return counts;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
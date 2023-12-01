#include <map>
#include <cassert>

map<char, int> histogram(string test);
bool issame(const map<char, int>& a, const map<char, int>& b);

map<char, int> histogram(string test) {
    map<char, int> counts;
    char letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter = test[i];
            counts[letter]++;
        }
    }
    return counts;
}

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));

    return 0;
}
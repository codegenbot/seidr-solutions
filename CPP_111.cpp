#include <map>

map<char, int> histogram(string test);

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string letter;
    for (char c : test) {
        if (c == ' ') {
            result[letter]++;
            letter = "";
        } else {
            letter += c;
        }
    }
    result[letter]++;
    return result;
}

int main() {
    assert(compareHistograms(histogram("a"), {{'a', 1}}));
    return 0;
}
#include <map>

bool issame(map<char, int> a, map<char, int> b);

map<char, int> histogram(string test);
map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            if (!letter.empty()) {
                result[letter]++;
                letter = "";
            }
        }
    }
    if (!letter.empty()) {
        result[letter]++;
    }
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    // Test cases
    map<char, int> a = histogram("hello world");
    map<char, int> b = {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}};
    assert(issame(a, b));

    map<char, int> c = histogram("this is a test");
    map<char, int> d = {{'t', 3}, {'h', 1}, {'i', 2}, {'s', 3}, {'a', 1}, {'e', 1}};
    assert(issame(c, d));

    map<char, int> e = histogram("");
    map<char, int> f = {};
    assert(issame(e, f));

    return 0;
}
#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b.at(pair.first) != pair.second) {
            return false;
        }
    }
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    map<char, int> test1 = histogram("hello");
    assert(test1.size() == 3);
    assert(test1['h'] == 1);
    assert(test1['e'] == 1);
    assert(test1['o'] == 1);

    map<char, int> test2 = histogram("programming");
    assert(test2.size() == 3);
    assert(test2['r'] == 2);
    assert(test2['g'] == 2);
    assert(test2['m'] == 2);

    map<char, int> test3 = histogram("       ");
    assert(test3.empty());

    map<char, int> test4 = histogram("");
    assert(test4.empty());

    return 0;
}
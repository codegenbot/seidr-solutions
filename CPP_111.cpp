#include <iostream>
#include <map>
#include <cassert>

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b);

map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> counts;

    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    int maxCount = 0;
    for (auto& pair : counts) {
        maxCount = max(maxCount, pair.second);
    }

    for (auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    string input = "hello world";
    map<char, int> result = histogram(input);
    map<char, int> expected = {
        {'l', 3},
        {'o', 2}
    };
    assert(issame(result, expected));

    cout << "Test passed successfully!" << endl;

    return 0;
}
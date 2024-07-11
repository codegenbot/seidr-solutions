#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

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

int main() {
    string input = "hello world";
    map<char, int> expected_output {{'l', 3}, {'o', 2}};
    map<char, int> output = histogram(input);
    assert(issame(expected_output, output));

    return 0;
}
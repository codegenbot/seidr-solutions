#include <iostream>
#include <map>

using namespace std;

map<char, int> histogram(string test);

int main() {
    map<char, int> result = histogram("a");
    for (const auto& pair : result) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    return 0;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : count) {
        maxCount = max(maxCount, pair.second);
    }

    for (const auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}
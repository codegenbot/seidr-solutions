#include <iostream>
#include <map>
#include <string>

using namespace std;

bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (auto it = a.begin(); it != a.end(); it++) {
        if (b.find(it->first) == b.end() || b[it->first] != it->second) {
            return false;
        }
    }

    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    string letter;
    int count = 0;

    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            if (!letter.empty()) {
                result[letter[0]]++;
                if (result[letter[0]] > count) {
                    count = result[letter[0]];
                }
                letter = "";
            }
        }
    }

    if (!letter.empty()) {
        result[letter[0]]++;
        if (result[letter[0]] > count) {
            count = result[letter[0]];
        }
    }

    map<char, int> output;
    for (auto it = result.begin(); it != result.end(); it++) {
        if (it->second == count) {
            output[it->first] = it->second;
        }
    }

    return output;
}

int main() {
    string test;
    getline(cin, test);

    map<char, int> result = histogram(test);

    for (auto it = result.begin(); it != result.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
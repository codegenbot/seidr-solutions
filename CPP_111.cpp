#include <iostream>
#include <map>
#include <cassert>

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
    string test = "apple banana cherry apple orange orange";
    map<char, int> output = histogram(test);
    map<char, int> expected_output = {{'a', 2}, {'b', 1}, {'c', 1}, {'o', 2}};
    assert(issame(output, expected_output));

    test = "hello world";
    output = histogram(test);
    expected_output = {{'o', 2}, {'l', 3}};
    assert(issame(output, expected_output));

    test = "cpp code contest";
    output = histogram(test);
    expected_output = {{'c', 3}, {'p', 2}};
    assert(issame(output, expected_output));

    cout << "All test cases pass" << endl;

    return 0;
}
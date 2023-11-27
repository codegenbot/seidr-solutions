#include <map>

using namespace std;

bool issame(map<char, int> a, map<char, int> b);

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
    /* Uncomment the test cases below to test the code */

    /* Test case 1
    string test1 = "hello world";
    map<char, int> result1 = histogram(test1);
    map<char, int> expected1 = {
        {'h', 1},
        {'e', 1},
        {'l', 3},
        {'o', 2},
        {'w', 1},
        {'r', 1},
        {'d', 1}
    };
    assert(issame(result1, expected1));
    */

    /* Test case 2
    string test2 = "cpp code contest";
    map<char, int> result2 = histogram(test2);
    map<char, int> expected2 = {
        {'c', 3},
        {'p', 2},
        {'o', 2},
        {'d', 1},
        {'e', 1},
        {'n', 1},
        {'t', 2},
        {'s', 2}
    };
    assert(issame(result2, expected2));
    */

    return 0;
}
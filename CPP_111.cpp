#include <map>

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
    // Uncomment the test cases below to test the code
    /*
    string test1 = "hello world";
    map<char, int> result1 = histogram(test1);
    map<char, int> expected1 = {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}};
    assert(issame(result1, expected1));

    string test2 = "a a a a";
    map<char, int> result2 = histogram(test2);
    map<char, int> expected2 = {{'a', 4}};
    assert(issame(result2, expected2));

    string test3 = "";
    map<char, int> result3 = histogram(test3);
    map<char, int> expected3 = {};
    assert(issame(result3, expected3));
    */

    return 0;
}
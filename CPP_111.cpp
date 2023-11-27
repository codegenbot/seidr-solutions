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
    // Uncomment the test cases below
    /*
    string test1 = "hello world";
    map<char, int> result1 = histogram(test1);
    map<char, int> expected1 = {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}};
    bool check1 = issame(result1, expected1);
    // Expected output: check1 = true

    string test2 = "a a a";
    map<char, int> result2 = histogram(test2);
    map<char, int> expected2 = {{'a', 3}};
    bool check2 = issame(result2, expected2);
    // Expected output: check2 = true

    string test3 = "";
    map<char, int> result3 = histogram(test3);
    map<char, int> expected3;
    bool check3 = issame(result3, expected3);
    // Expected output: check3 = true

    string test4 = "abc";
    map<char, int> result4 = histogram(test4);
    map<char, int> expected4 = {{'a', 1}, {'b', 1}, {'c', 1}};
    bool check4 = issame(result4, expected4);
    // Expected output: check4 = true
    */

    return 0;
}
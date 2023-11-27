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
    /* Uncomment the test cases below to test the code */

    // Test case 1
    // string test1 = "hello world";
    // map<char, int> result1 = histogram(test1);
    // map<char, int> expected1 = {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}};
    // bool same1 = issame(result1, expected1);
    // cout << "Test case 1: " << (same1 ? "Passed" : "Failed") << endl;

    // Test case 2
    // string test2 = "apple orange banana";
    // map<char, int> result2 = histogram(test2);
    // map<char, int> expected2 = {{'a', 4}, {'p', 3}, {'l', 1}, {'e', 2}, {'o', 1}, {'r', 1}, {'n', 2}, {'g', 1}, {'b', 1}};
    // bool same2 = issame(result2, expected2);
    // cout << "Test case 2: " << (same2 ? "Passed" : "Failed") << endl;

    return 0;
}
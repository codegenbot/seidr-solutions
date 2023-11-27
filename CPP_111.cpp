#include <map>

map<char, int> histogram(string test);

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
    cout << "Test case 1: " << (issame(result1, expected1) ? "Passed" : "Failed") << endl;

    string test2 = "cpp code contest";
    map<char, int> result2 = histogram(test2);
    map<char, int> expected2 = {{'c', 3}, {'p', 2}, {'o', 2}, {'d', 1}, {'e', 1}, {'n', 1}, {'t', 2}, {'s', 2}};
    cout << "Test case 2: " << (issame(result2, expected2) ? "Passed" : "Failed") << endl;

    string test3 = "";
    map<char, int> result3 = histogram(test3);
    map<char, int> expected3 = {};
    cout << "Test case 3: " << (issame(result3, expected3) ? "Passed" : "Failed") << endl;
    */

    return 0;
}
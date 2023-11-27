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
    
    // Test case 1
    // string test1 = "hello world";
    // map<char, int> result1 = histogram(test1);
    // map<char, int> expected1 = {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}};
    // cout << (issame(result1, expected1) ? "Test case 1 passed" : "Test case 1 failed") << endl;

    // Test case 2
    // string test2 = "programming is fun";
    // map<char, int> result2 = histogram(test2);
    // map<char, int> expected2 = {{'p', 1}, {'r', 2}, {'o', 1}, {'g', 2}, {'a', 1}, {'m', 2}, {'i', 2}, {'n', 2}, {'s', 1}, {'f', 1}, {'u', 1}};
    // cout << (issame(result2, expected2) ? "Test case 2 passed" : "Test case 2 failed") << endl;

    return 0;
}
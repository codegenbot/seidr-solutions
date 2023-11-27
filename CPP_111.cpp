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
    // Test cases
    map<char, int> result1 = histogram("hello world");
    map<char, int> expected1;
    expected1['h'] = 1;
    expected1['e'] = 1;
    expected1['l'] = 3;
    expected1['o'] = 2;
    expected1['w'] = 1;
    expected1['r'] = 1;
    expected1['d'] = 1;
    if (issame(result1, expected1)) {
        cout << "Test case 1 passed" << endl;
    } else {
        cout << "Test case 1 failed" << endl;
    }

    map<char, int> result2 = histogram("");
    map<char, int> expected2;
    if (issame(result2, expected2)) {
        cout << "Test case 2 passed" << endl;
    } else {
        cout << "Test case 2 failed" << endl;
    }

    return 0;
}
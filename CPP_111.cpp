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
    string test1 = "a b c d";
    string test2 = "a b c d";
    string test3 = "a b c";
    map<char, int> result1 /*= histogram(test1)*/;
    map<char, int> result2 /*= histogram(test2)*/;
    map<char, int> result3 /*= histogram(test3)*/;
    // bool same = issame(result1, result2);
    return 0;
}
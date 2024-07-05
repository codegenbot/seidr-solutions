#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>
#include <string>
#include <cassert>
#include <cstring>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream iss(s);
    string word;
    while (iss >> word) {
        int consonant_count = 0;
        for (char c : word) {
            if (isalpha(c) && !strchr("AEIOUaeiou", c)) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    vector<string> expected1 = {"b", "c", "d", "f"};
    vector<string> actual1 = select_words("a b c d e f", 1);
    assert(actual1 == expected1);

    vector<string> expected2 = {"hello"};
    vector<string> actual2 = select_words("hello world", 3);
    assert(actual2 == expected2);

    cout << "All tests passed!" << endl;
    return 0;
}
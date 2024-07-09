#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;
    for (char c : s) {
        if (c != ' ') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonantCount++;
            }
            word += c;
        } else {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    vector<string> expected = {"b", "c", "d", "f"};
    vector<string> result = select_words("a b c d e f ", 1);

    assert(result == expected);

    cout << "All test cases passed successfully!";

    return 0;
}
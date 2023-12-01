#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    // Add your implementation here
    // Return true if a and b have the same elements, else return false
    // You can compare the elements using a loop or using the standard library function std::equal()
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<string> words_string(string s) {
    vector<string> words;
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }

    if (word != "") {
        words.push_back(word);
    }

    return words;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    // Add more test cases to verify your code
    // assert(issame(words_string("input_string"), expected_output));

    return 0;
}
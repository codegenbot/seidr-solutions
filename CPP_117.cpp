#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Test issame function
    vector<string> test1 = {"apple", "banana", "cherry"};
    vector<string> test2 = {"apple", "banana", "cherry"};
    vector<string> test3 = {"apple", "orange", "cherry"};

    std::cout << issame(test1, test2) << std::endl; // Output: 1 (true)
    std::cout << issame(test1, test3) << std::endl; // Output: 0 (false)

    // Test select_words function
    string input = "hello world apple orange";
    int n = 2;
    vector<string> result = select_words(input, n);

    for (const string& word : result) {
        std::cout << word << " ";
    }

    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }

    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }

    return result;
}
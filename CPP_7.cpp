#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> words, string substr) {
    vector<string> filtered_words;
    for (const auto& word : words) {
        if (word.find(substr) != string::npos) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

int main() {
    vector<string> filtered_result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    vector<string> expected_result = {"grunt", "prune"};

    // Compare the filtered result with the expected result manually
    if (filtered_result == expected_result) {
        cout << "Test Passed!\n";
    } else {
        cout << "Test Failed!\n";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

bool issame(const string &a, const string &b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    vector<string> words = {"hello", "world", "cpp", "contest"};
    vector<string> filtered_words = filter_by_substring(words, "cpp");
    for(const auto& word : filtered_words) {
        cout << word << " ";
    }
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for(const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}
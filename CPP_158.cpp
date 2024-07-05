#include <unordered_set>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

string find_max(vector<string> words) {
    auto unique_char_count = [](const string& s) {
        return unordered_set<char>(s.begin(), s.end()).size();
    };
    
    string max_word = "";
    int max_unique_chars = 0;
    
    for (const auto& word : words) {
        int unique_chars = unique_char_count(word);
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }
    
    return max_word;
}

int main() {
    vector<string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }
    cout << find_max(words) << endl; 
    return 0;
}
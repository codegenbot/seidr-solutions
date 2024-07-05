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
    cout << find_max({"play", "drive", "swim"}) << endl;
    return 0;
}
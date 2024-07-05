#include <iostream>
#include <vector>
#include <string>

using namespace std;

string find_max(vector<string> words) {
    auto unique_char_count = [](const string& s) {
        vector<bool> seen(256, false);
        int count = 0;
        for(char c : s) {
            if(!seen[c]) {
                seen[c] = true;
                count++;
            }
        }
        return count;
    };

    string max_word = "";
    int max_unique = 0;
    for(const string& word : words) {
        int unique_count = unique_char_count(word);
        if(unique_count > max_unique || (unique_count == max_unique && word < max_word)) {
            max_unique = unique_count;
            max_word = word;
        }
    }
    return max_word;
}

int main() {
    cout << find_max({"play", "play", "play"}) << endl;
    cout << find_max({"apple", "banana", "grapes"}) << endl;
    cout << find_max({"abcd", "abc", "ab"}) << endl;
    cout << find_max({"ab", "bc", "cd"}) << endl;
    cout << find_max({"aaa", "bbb", "ccc"}) << endl;
    cout << find_max({"pqr", "pqrs", "pqrst"}) << endl;
    return 0;
}
#include <string>
#include <set>
#include <vector>

using namespace std;

string find_max(const vector<string>& words) {
    string max_word = "";
    int max_unique_chars = 0;

    for (const string& word : words) {
        int unique_chars = std::set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}

// Test the function
assert(find_max({"apple", "banana", "orange", "grape"}) == "banana");
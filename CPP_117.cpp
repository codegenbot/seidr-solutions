```cpp
#include <string>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) { return find(b.begin(), b.end(), s) != b.end(); });
}

using my_string = std::string;
my_string word; 
vector<string> select_words(my_string s, int n) {
    vector<string> result;
    word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            int consonant_count = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isvowel(tolower(ch))) {
                    consonant_count++;
                    if (consonant_count == n) {
                        has_n_consonants = true;
                        break;
                    }
                }
            }
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

int main() {
    my_string s = "a b c d e f";
    int n = 1;
    vector<string> expected = {"b", "c", "d", "f"};
    assert(issame(select_words(s, n), expected));
}
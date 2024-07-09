#include <string>
#include <vector>
#include <algorithm>

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return max_word;
}

int main() {
    vector<string> words = {"play", "play", "play"};
    assert(find_max(words) == "play");
    return 0;
}
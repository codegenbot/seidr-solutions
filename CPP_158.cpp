```cpp
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

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
    assert(find_max({"play", "play", "play"}) == "play");
    vector<string> words = {"play", "play", "play"};
    string result = find_max(words);
}
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(const vector<string>& words, const string& substr) {
    vector<string> filtered_words;
    for (const string& word : words) {
        if (word.find(substr) != string::npos) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame_words(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int pos) {
    vector<string> words;

    // Implementation to extract words from string 's' based on 'pos'
    
    return words;
}

int main() {
    assert(issame_words(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));

    return 0;
}
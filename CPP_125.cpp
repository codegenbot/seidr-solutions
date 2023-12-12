```
#include <string>
#include <vector>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> split_words(const string& text) {
    vector<string> words;
    size_t pos = 0;
    while ((pos = text.find(" ", pos)) != string::npos) {
        words.push_back(text.substr(pos, pos + 1));
        pos++;
    }
    return words;
}

int main() {
    vector<string> expected_output = {"0"};
    assert(issame(split_words(""), expected_output));
    return 0;
}
```
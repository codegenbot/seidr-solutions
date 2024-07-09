#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<pair<int, string>> a, vector<pair<int, string>> b) {
    return a == b;
}

vector<pair<int, string>> select_words(string s, int n) {
    vector<pair<int, string>> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int count = 0;
                for (char w : word) {
                    if (w == 'a' || w == 'e' || w == 'i' || w == 'o' || w == 'u')
                        count++;
                }
                if (count <= n) {
                    result.push_back({count, word});
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        int count = 0;
        for (char w : word) {
            if (w == 'a' || w == 'e' || w == 'i' || w == 'o' || w == 'u')
                count++;
        }
        if (count <= n)
            result.push_back({count, word});
    }
    return result;
}

int main() {
    vector<pair<int, string>> expected = {{1, "b"}, {1, "c"}, {1, "d"}, {1, "f"}};
    assert(issame(select_words("a b c d e f", 1), vector<pair<int, string>>({{1, "b"}, {1, "c"}, {1, "d"}, {1, "f"}})));
    return 0;
}
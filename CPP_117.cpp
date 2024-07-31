#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n);

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
}
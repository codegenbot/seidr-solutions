#include <vector>
#include <string>
#include <cassert>

int islower(int c);

bool issame(vector<string> a, vector<string> b);

vector<string> split_words(string txt);

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}
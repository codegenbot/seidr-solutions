#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string>b) {
    // Check if two vectors have the same elements
    return (a.size() == b.size()) && all_of(a.begin(), a.end(),
            [b](const string& str) { return find(b.begin(), b.end(), str)
                    != b.end(); });
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}
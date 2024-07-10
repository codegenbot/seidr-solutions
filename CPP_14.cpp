#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main() {
    assert(isSame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}
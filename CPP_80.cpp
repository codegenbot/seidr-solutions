#include <string>

bool is_happy(string s) {
    bool distinct = true;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        set<char> characters(sub.begin(), sub.end());
        if (characters.size() != 3)
            distinct = false;
    }
    return distinct;
}

int main() {
    assert(is_happy("iopaxioi") == true );
    return 0;
}
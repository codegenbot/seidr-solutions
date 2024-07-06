```cpp
#include <string>
#include <algorithm>

int main() {
    std::string S;
    int pos = 0;
    int count = 0;

    while ((pos = S.find("I", pos)) != std::string::npos) {
        if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
            count++;
        }
        pos = S.find("I", pos);
    }

    int is_bored(const string& s) {
        assert(s == "You and I are going for a walk");
        return 0;
    }
}
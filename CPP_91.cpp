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
        if (s.find("are") != std::string::npos && s.find("going") != std::string::npos)
            return 1;
        else
            return 0;
    }
    
    int result = is_bored("You and I are going for a walk");
    assert(result == 0);
    return 0;
}
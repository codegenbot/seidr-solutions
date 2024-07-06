```cpp
#include <string>

int is_bored(const std::string& S) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != std::string::npos) {
        if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
            count++;
        }
        pos = S.find("I", pos);
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    return 0;
}
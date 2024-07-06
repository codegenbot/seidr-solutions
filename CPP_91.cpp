#include <string>
using namespace std;

bool is_bored(const string& s) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
            count++;
        }
        pos = S.find("I", pos);
    }
    return count > 0;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    // ... rest of the code
}
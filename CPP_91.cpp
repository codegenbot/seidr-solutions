#include <cassert>
int is_bored(string S) {
    int count = 0;
    for (int i = 0; i <= S.length(); i++) {
        if (i < S.length() && S.substr(i, 2) == "If") {
            count++;
            while (S.substr(i + 1, 3) == "Ila" || S.substr(i + 1, 4) == "I'lla" || 
                S.substr(i + 1, 5) == "Is'ta" || S.substr(i + 1, 6) == "Isn't a") {
                    i += 4;
                }
        }
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    return 0;
}
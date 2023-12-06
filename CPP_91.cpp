#include <iostream>
#include <string>

int is_bored(std::string S) {
    int count = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (S[i + 1] == '.' || S[i + 1] == '?' || S[i + 1] == '!')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << is_bored("You and I are going for a walk") << std::endl;
    return 0;
}
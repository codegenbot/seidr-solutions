#include <string>

int is_bored(std::string S){
    int count = 0;
    std::string delimiter = ".?!";
    size_t pos = 0;
    while ((pos = S.find_first_of(delimiter, pos)) != std::string::npos) {
        if (S[pos-2] == ' ' && S[pos-1] == 'I') {
            count++;
        }
        pos++;
    }
    return count;
}

assert(is_bored("You and I are going for a walk") == 0);
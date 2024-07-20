#include <string>

int is_bored(std::string S){
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I ", pos)) != std::string::npos) {
        if (pos == 0 || S[pos - 1] == '.' || S[pos - 1] == '?' || S[pos - 1] == '!') {
            count++;
        }
        pos += 2;
    }
    return count;
}

int main(){
    assert(is_bored("You and I are going for a walk") == 0);
    return 0;
}
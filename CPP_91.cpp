#include <string>
using namespace std;

int is_bored(std::string S){
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (pos == 0 || S[pos - 1] == '.' || S[pos - 1] == '?' || S[pos - 1] == '!') {
            count++;
        }
        pos++;
    }
    return count;
}

int main() {
    cout << is_bored("You and I are going for a walk");
    return 0;
}
#include <string>

int count_bored_instances(string S){
    int count = 0;
    string delimiter = ".?!";
    size_t pos = 0;
    while ((pos = S.find_first_of(delimiter, pos)) != string::npos) {
        if (S[pos-2] == ' ' && S[pos-1] == 'I') {
            count++;
        }
        pos++;
    }
    return count;
}

int main() {
    assert(count_bored_instances("You and I are going for a walk") == 0);
}
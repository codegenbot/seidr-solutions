#include <iostream>
#include <string>

using namespace std;

int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos++;
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    cout << "Hello, World!";
    return 0;
}
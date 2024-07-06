```cpp
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (char c : s) {
        if (c == ' ') {
            result += " ";
        } else if (c >= 'a' && c <= 'z') {
            result += (char)(c - 32);
        } else {
            result += (char)(c);
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}
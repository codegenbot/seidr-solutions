#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (char c : s) {
        if (c != ' ') {
            result += tolower(c);
        } else {
            result += " ";
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".hi my aemn is mister .robot how are you?");
    return 0;
}
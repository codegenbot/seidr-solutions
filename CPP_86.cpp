#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        size_t nextSpace = s.find(' ', pos);
        if (nextSpace == string::npos) {
            nextSpace = s.length();
        }
        string word = s.substr(pos, nextSpace - pos);
        for (char c : word) {
            if(c>=97&&c<=122||c>=65&&c<=90) result+=tolower(c);
            else result+=c;
        }
        pos = nextSpace + 1;
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}
#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    string result = "";
    int i = 0, j = 0;
    
    while (i <= s.length()) {
        if (j >= s.length() || s[j] == ' ') {
            while (j < s.length() && s[j] == ' ') j++;
            for (; j < s.length(); ) {
                result += s[j];
                j++;
            }
            result += ' ';
            i = j;
        } else {
            char c = s[i];
            int k = i;
            while (k <= s.length() && s[k] <= c) k++;
            for (; i < k; ) {
                result += s[i];
                i++;
            }
            result += c;
        }
    }
    
    return result.substr(0, result.size() - 1);
}

int main() {
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") ==
".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}
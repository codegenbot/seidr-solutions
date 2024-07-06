```cpp
#include<string>
#include<algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == ' ') {
            result += " ";
            i++;
        } else {
            string word;
            do {
                word += s[i];
                i++;
            } while (i < s.length() && s[i] != ' ');
            sort(word.begin(), word.end());
            result += word;
        }
    }
    return result;
}
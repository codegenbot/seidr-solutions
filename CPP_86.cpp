#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string temp = "";
            for (int j = i; j < s.size() && s[j] != ' '; j++) {
                temp += s[j];
            }
            sort(temp.begin(), temp.end());
            result += temp;
            i += temp.size() - 1;
        }
    }
    return result;
}
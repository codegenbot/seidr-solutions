#include<string>
#include<algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += s[i];
            continue;
        }
        string temp = "";
        for (int j = i; j < s.length() && s[j] != ' '; j++) {
            temp += s[j];
        }
        sort(temp.begin(), temp.end());
        result += temp;
        i += temp.length() - 1;
    }
    return result;
}
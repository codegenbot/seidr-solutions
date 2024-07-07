using namespace std;

string anti_shuffle(string s) {
    using Str = string;
    Str result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            Str word;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                word += s[j];
            }
            sort(word.begin(), word.end());
            result += word;
            i = j - 1;
        }
    }
    return result;
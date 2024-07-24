#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

bool same_chars(string s0, string s1) {
    transform(s0.begin(), s0.end(), s0.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    s0.erase(remove_if(s0.begin(), s0.end(), ::isspace), s0.end());
    s1.erase(remove_if(s1.begin(), s1.end(), ::isspace), s1.end());

    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());

    return s0 == s1;
}
#include <iostream>
using namespace std;

bool same_chars(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i <= s1.size(); i++) {
        int count1 = 0, count2 = 0;
        while (i + count1 <= s1.size() && s1[i] == s1[i + count1]) {
            count1++;
        }
        while (i + count2 <= s2.size() && s2[i] == s2[i + count2]) {
            count2++;
        }
        if (count1 != count2) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << (same_chars("aabb", "aaccc") ? "True" : "False");
    return 0;
}
```cpp
#include <iostream>
using namespace std;

bool same_chars(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.size(); i++) {
        int count1 = 0;
        for (; i + count1 < s1.size() && s1[i] == s1[i + count1]; count1++);
        int count2 = 0;
        for (; i + count2 < s2.size() && s2[i] == s2[i + count2]; count2++);
        if (count1 != count2) {
            return false;
        }
    }
    return true;

}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    if (same_chars(s1, s2)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
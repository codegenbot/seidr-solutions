#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'A') {
            int j = i + 1;
            while (j < s.length() && !isdigit(s[j])) {
                j++;
            }
            apples = stoi(s.substr(i, j - i));
            break;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'o' || s[i] == 'O') {
            int j = i + 1;
            while (j < s.length() && !isdigit(s[j])) {
                j++;
            }
            oranges = stoi(s.substr(i, j - i));
            break;
        }
    }
    return n - apples - oranges;
}
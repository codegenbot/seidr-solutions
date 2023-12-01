#include <string>

int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'a') {
            int j = i + 1;
            while (isdigit(s[j])) {
                apples = apples * 10 + (s[j] - '0');
                j++;
            }
        } else if (s[i] == 'o') {
            int j = i + 1;
            while (isdigit(s[j])) {
                oranges = oranges * 10 + (s[j] - '0');
                j++;
            }
        }
        i++;
    }
    return n - apples - oranges;
}
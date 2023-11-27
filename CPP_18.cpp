#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int n = str.length();
    int m = substring.length();

    if (m == 0) {
        return 0;
    }

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (str[i + j] != substring[j]) {
                break;
            }
        }
        if (j == m) {
            count++;
        }
    }

    return count;
}
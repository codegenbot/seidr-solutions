#include <string>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if ((n == 1 && i == 1) || (n > 1 && (i == 1 || to_string(i).substr(0, 1) == "1" || to_string(i).substr(to_string(i).size() - 1, 1) == "1"))) {
            count++;
        }
    }
    return count;
}
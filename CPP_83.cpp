#include <vector>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || to_string(i).substr(0, 1) == "1" || 
            to_string(i).substr(to_string(i).length() - 1, 1) == "1") {
            count++;
        }
    }
    for (int i = 10; i <= 9 * n; i++) {
        if (i % 10 == 1 || to_string(i).substr(0, 1) == "1" || 
            to_string(i).substr(to_string(i).length() - 1, 1) == "1") {
            count++;
        }
    }
    return count;
}
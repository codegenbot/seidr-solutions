#include <string>
#include <algorithm>

using namespace std;

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if ((c >= 'B' && c <= 'F')) {
            int value = (c - 'A' + 10);
            if (value == 11 || value == 13)
                count++;
        }
    }
    return count;
}
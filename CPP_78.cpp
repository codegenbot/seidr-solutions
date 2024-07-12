#include <string>
#include <algorithm>

using namespace std;

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if ((c >= 'A' && c <= 'F')) {
            switch (c - 'A') {
                case 0: case 1: case 2: case 3:
                    count++;
                    break;
            }
        }
    }
    return count;
}
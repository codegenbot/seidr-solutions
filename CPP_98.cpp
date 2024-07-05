#include <string>
using namespace std;

int count_upper(string s) {
    int count = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            count++;
        }
    }
    return count;
}
#include <string>
#include <cctype>
using namespace std;

int count_upper(string s) {
    int count = 0;
    for (char c : s) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}
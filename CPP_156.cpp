#include <map>
using namespace std;

string int_to_mini_roman(int number) {
    map<int, string> romanMap = {{1, "i"}, {4, "iv"}, {5, "v"}, {9, "ix"},
                                  {10, "x"}, {40, "xl"}, {50, "l"},
                                  {90, "xc"}, {100, "c"}, {400, "cd"},
                                  {500, "d"}, {900, "cm"}, {1000, "m"}};
    string roman = "";
    int i = 1000;
    while (i > 0) {
        if (number >= i) {
            number -= i;
            roman += romanMap[i];
        } else if (number >= (i / 10 * 9)) {
            i /= 10;
            continue;
        } else {
            i /= 10;
        }
    }
    return roman;
}
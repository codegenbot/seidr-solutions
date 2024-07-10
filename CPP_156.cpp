#include <map>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    map<int, string> roman = {{1, "i"}, {4, "iv"}, {5, "v"}, {9, "ix"},
                                {10, "x"}, {40, "xl"}, {50, "l"},
                                {90, "xc"}, {100, "c"}, {400, "cd"},
                                {500, "d"}, {900, "cm"}, {1000, "m"}};
    string result = "";
    for (int i = 1000; i >= 1; i /= 10) {
        while (number >= i) {
            number -= i;
            result += roman[i];
        }
        if (number < i && i != 1) {
            result += roman[i / 10] + roman[i % 10];
            break;
        }
    }
    return result;
}
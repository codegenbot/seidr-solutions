#include <map>
using namespace std;

string int_to_mini_roman(int number) {
    map<int, string> romanMap = {{1000, "m"}, {900, "cm"}, {500, "d"},
                                  {400, "cd"}, {100, "c"}, {90, "xc"},
                                  {50, "l"}, {40, "xl"}, {10, "x"},
                                  {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};

    string roman = "";
    for (auto it = romanMap.rbegin(); it != romanMap.rend(); ++it) {
        while (number >= it->first) {
            roman += it->second;
            number -= it->first;
        }
    }
    return roman;
}
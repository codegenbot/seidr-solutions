#include <map>
using namespace std;

string int_to_mini_roman(int number) {
    map<int, string> roman = {{1000, "m"}, {900, "cm"}, {500, "d"}, 
                               {400, "cd"}, {100, "c"}, {90, "cx"},
                               {50, "l"}, {40, "xl"}, {10, "x"}, 
                               {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};
    string result;

    for (auto p = roman.rbegin(); p != roman.rend(); ++p) {
        while (number >= p->first) {
            result += p->second;
            number -= p->first;
        }
    }

    return result;
}
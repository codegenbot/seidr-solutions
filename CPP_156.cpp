#include <unordered_map>

using namespace std;

string int_to_mini_roman(int number) {
    unordered_map<int, string> romanMap = {{1, "i"}, {4, "iv"}, {5, "v"}, 
                                            {9, "ix"}, {10, "x"}, {40, "xl"}, 
                                            {50, "l"}, {90, "xc"}, {100, "c"}, 
                                            {400, "cd"}, {500, "d"}, {900, "cm"}, 
                                            {1000, "m"}};
    string roman = "";
    
    for (auto it = romanMap.rbegin(); it != romanMap.rend(); ++it) {
        while (number >= it->first) {
            roman += it->second;
            number -= it->first;
        }
    }
    
    return roman;
}
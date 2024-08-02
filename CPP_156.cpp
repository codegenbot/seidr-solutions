#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number){
    string roman = "";
    vector<pair<int, string>> roman_map = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };
    
    for(const auto& pair : roman_map){
        while(number >= pair.first){
            roman += pair.second;
            number -= pair.first;
        }
    }
    
    return roman;
}

int main(){
    assert(int_to_mini_roman(1000) == "m");
    return 0;
}
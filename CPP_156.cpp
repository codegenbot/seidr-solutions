#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string int_to_mini_roman(int number){
    std::vector<std::pair<int, std::string>> roman_map = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };

    std::string result = "";
    for(auto& mapping : roman_map){
        while(number >= mapping.first){
            result += mapping.second;
            number -= mapping.first;
        }
    }

    return result;
}

int main(){
    assert (int_to_mini_roman(1000) == "m");
    assert (int_to_mini_roman(1990) == "mcmxc");
    assert (int_to_mini_roman(2008) == "mmviii");

    std::cout << "All tests passed successfully." << std::endl;
    return 0;
}
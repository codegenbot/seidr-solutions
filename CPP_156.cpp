
#include <string>
#include <cassert>

std::string int_to_mini_roman(int number){
    std::string roman[] = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    int value[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    std::string result = "";
    
    for(int i = 12; i >= 0; i--){
        while(number >= value[i]){
            result += roman[i];
            number -= value[i];
        }
    }
    
    return result;
}

int main(){
    assert (int_to_mini_roman(1000) == "m");
    return 0;
}
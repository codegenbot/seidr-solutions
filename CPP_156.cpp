#include <string>

std::string int_to_mini_roman(int number) {
    if (number <= 0) return "Please enter a valid number.";
    std::string roman = "";
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int i = 0;
    while (number > 0) {
        if (number >= values[i]) {
            number -= values[i];
            roman += symbols[i];
        } else {
            i++;
        }
    }
    return roman;
}
```cpp
#include <iostream>
#include <string>

std::string int_to_roman(int number);

int main()
{
    std::cout << int_to_roman(2022) << std::endl;
    return 0;
}

std::string int_to_roman(int number)
{
    if (number <= 0)
        return "Input should be a positive integer";
    else if (number >= 4000)
        return "Input is too large";

    std::string roman = "";
    int thousands = number / 1000;
    for (int i = 0; i < thousands; i++)
        roman += "M";

    int hundreds = (number % 1000) / 100;
    if (hundreds > 0)
    {
        roman += "D";
        for (int i = 1; i < hundreds; i++)
            roman += "C";
    }

    int tens = (number % 100) / 10;
    if (tens > 3)
    {
        roman += "CM";
        for (int i = 4; i <= tens; i++)
            roman += "D";
    }
    else
    {
        for (int i = 1; i <= tens; i++)
            roman += "X";
    }

    int ones = number % 10;
    if (ones > 3)
    {
        roman += "IV";
        for (int i = 5; i <= ones; i++)
            roman += "V";
    }
    else
    {
        for (int i = 1; i <= ones; i++)
            roman += "I";
        return roman;
    }

}
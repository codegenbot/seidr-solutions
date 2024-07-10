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
        return "";
    else if (number >= 4000)
        return "Input is too large";

    std::string roman = "";
    int thousands = number / 1000;
    for (int i = 0; i < thousands; i++)
    {
        char* temp = new char[1];
        *temp = 'M';
        roman += temp;
        delete[] temp;
    }

    int hundreds = (number % 1000) / 100;
    if (hundreds > 0)
    {
        char* temp = new char[1];
        *temp = 'D';
        roman += temp;
        delete[] temp;

        for (int i = 1; i < hundreds; i++)
        {
            char* temp = new char[1];
            *temp = 'C';
            roman += temp;
            delete[] temp;
        }
    }

    int tens = (number % 100) / 10;
    if (tens > 3)
    {
        char* temp = new char[2];
        temp[0] = 'C';
        temp[1] = 'M';
        roman += temp;
        delete[] temp;

        for (int i = 4; i <= tens; i++)
        {
            char* temp = new char[1];
            *temp = 'D';
            roman += temp;
            delete[] temp;
        }
    }
    else
    {
        for (int i = 1; i <= tens; i++)
        {
            char* temp = new char[1];
            *temp = 'X';
            roman += temp;
            delete[] temp;
        }
    }

    int ones = number % 10;
    if (ones > 3)
    {
        char* temp = new char[2];
        temp[0] = 'I';
        temp[1] = 'V';
        roman += temp;
        delete[] temp;

        for (int i = 5; i <= ones; i++)
        {
            char* temp = new char[1];
            *temp = 'V';
            roman += temp;
            delete[] temp;
        }
    }
    else
    {
        for (int i = 1; i <= ones; i++)
        {
            char* temp = new char[1];
            *temp = 'I';
            roman += temp;
            delete[] temp;
        }
    }

    return roman;
}
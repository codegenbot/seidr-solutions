#include <string>

string sort_numbers(string numbers);

string sort_numbers(string numbers)
{
    map<string, int> number_map;
    number_map["zero"] = 0;
    number_map["one"] = 1;
    number_map["two"] = 2;
    number_map["three"] = 3;
    number_map["four"] = 4;
    number_map["five"] = 5;
    number_map["six"] = 6;
    number_map["seven"] = 7;
    number_map["eight"] = 8;
    number_map["nine"] = 9;

    string result = "";
    string current_number = "";

    for (int i = 0; i < numbers.length(); i++)
    {
        if (numbers[i] == ' ')
        {
            result += current_number + " ";
            current_number = "";
        }
        else
        {
            current_number += numbers[i];
        }
    }

    result += current_number;

    int n = result.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            string number1 = "";
            string number2 = "";
            int k = 0;

            while (result[j + k] != ' ')
            {
                number1 += result[j + k];
                k++;
            }

            k = 0;

            while (result[j + k + 1] != ' ')
            {
                number2 += result[j + k + 1];
                k++;
            }

            if (number_map[number1] > number_map[number2])
            {
                swap(result[j], result[j + 1]);
            }
        }
    }

    return result;
}
Here is the completed code:

```cpp
string int_to_mini_roman(int number) {
    vector<pair<int, string>> romans = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                         {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
                                         {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"},
                                         {1, "i"}};
    string result;
    
    for (const auto &roman : romans) {
        while (number >= roman.first) {
            number -= roman.first;
            result += roman.second;
        }
        if (number > 0) {
            for (int i = 1; i <= number; ++i) {
                switch (number % 10) {
                    case 1: result += "i"; break;
                    case 2: result += "ii"; break;
                    case 3: result += "iii"; break;
                    case 4: result += "iv"; result.back() = 'x'; break;
                    case 5: result += "v"; break;
                    case 6: result += "vi"; result.replace(result.size()-1, 1, "x"); break;
                    case 7: result += "vii"; result.replace(result.size()-2, 2, "xx"); break;
                    case 8: result += "viii"; result.replace(result.size()-3, 3, "xxx"); break;
                    default: {
                        char temp = 'i' + (number % 10) - 1;
                        if ((number % 10) == 4)
                            temp = 'x';
                        else if ((number % 10) >= 5 && (number % 10) <= 8)
                            temp = 'v' + ((number % 10) - 5);
                        result += temp;
                    }
                }
                number /= 10;
            }
        }
    }
    
    return result;
}
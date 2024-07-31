#include <unordered_map>

string int_to_mini_roman(int number) {
    unordered_map<int, string> roman = {{1, "i"}, {4, "iv"}, {5, "v"}, 
                                          {9, "ix"}, {10, "x"}, {40, "xl"},
                                          {50, "l"}, {90, "xc"}, {100, "c"}, 
                                          {400, "cd"}, {500, "d"}, {900, "cm"}, 
                                          {1000, "m"}};

    string result;
    int i = 1000;
    while (i > 0) {
        if (number >= i) {
            number -= i;
            result += roman[i];
        } else if (number >= i - 100) {
            number -= i - 100;
            result += "c";
        } else {
            int j = i;
            while (j > 0 && number < j) {
                j--;
            }
            if (j == i) {
                i /= 5; 
            } else {
                i -= j;
            }
            result += roman[j];
        }
    }

    return result;
}
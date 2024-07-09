#include <unordered_map>
using namespace std;

string int_to_mini_roman(int number) {
    unordered_map<int, string> roman = {{1, "i"}, {4, "iv"}, {5, "v"},
                                          {9, "ix"}, {10, "x"}, {40, "xl"},
                                          {50, "l"}, {90, "xc"}, {100, "c"},
                                          {400, "cd"}, {500, "d"}, {900, "cm"},
                                          {1000, "m"}};

    string result = "";
    for (int i = 1000; i >= 1; i /= 10) {
        while (number >= roman.at(i)) {
            result += roman.at(i);
            number -= i;
        }
        if (number < i && i > 5) {
            int k = i / 5;
            result.append(k, roman.at(i/5));
            number -= k * i / 5;
        }
    }

    // Convert to lowercase
    for (int i = 0; i < result.length(); i++) {
        result[i] = tolower(result[i]);
    }

    return result;
}
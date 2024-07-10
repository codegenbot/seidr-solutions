#include <algorithm>
#include <string>

using namespace std;

string sort_numbers(string numbers) {
    string result = "";
    map<string, int> numMap;
    for (int i = 0; i <= 9; i++) {
        string str = to_string(i);
        if (i == 0)
            str = "zero";
        else if (i < 3)
            str = (i == 1 ? "one" : (i == 2 ? "two" : "three"));
        else if (i < 7)
            str = (i == 4 ? "four" : (i == 5 ? "five" : (i == 6 ? "six" : "seven")));
        else
            str = (i == 8 ? "eight" : "nine");
        numMap[str] = i;
    }

    for (char c : numbers) {
        if (c != ' ')
            result += (numMap.find(to_string(c)))->first + " ";
    }
    return result.substr(0, result.size() - 1);
}
#include <algorithm>
#include <string>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                 {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                 {"eight", 8}, {"nine", 9}};

    string result = "";
    for (char c : numbers) {
        if (c == ' ') {
            continue;
        }
        string num = "";
        while (c != ' ' && c != '\0') {
            num += c;
            c = getchar();
        }
        result += num_map[num] < result.length() ? num + " " : result.substr(0, result.find(" ")) + " " + num;
    }
    return result.substr(0, result.size() - 1);
}
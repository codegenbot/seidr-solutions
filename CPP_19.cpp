#include <iostream>
#include <map>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> reverse_map;

    for (auto const& pair : number_map) {
        reverse_map[pair.second] = pair.first;
    }

    string result;
    int count = 0;

    for (int i = 0; i <= 9; i++) {
        if (numbers.find(reverse_map[i]) != string::npos) {
            if (count > 0) {
                result += " ";
            }
            result += reverse_map[i];
            ++count;
        }
    }

    return result;
}
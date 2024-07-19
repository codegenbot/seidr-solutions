#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                   {"eight", 8}, {"nine", 9}};

    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        } else {
            temp += numbers[i];
        }

        if (i == numbers.length() - 1 || numbers[i + 1] != ' ') {
            numVector.push_back(temp);
            temp = "";
        }
    }

    sort(numVector.begin(), numVector.end(), [&numberMap](const string &a, const string &b) {
        return numberMap.at(a) < numberMap.at(b);
    });

    string result;
    for (const auto &num : numVector) {
        result += num + " ";
    }

    return result.substr(0, result.length() - 1);
}
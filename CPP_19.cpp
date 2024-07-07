#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                  {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                  {"eight", 8}, {"nine", 9}};

    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }

        for (int j = i + 1; j <= numbers.length(); j++) {
            temp = numbers.substr(i, j - i);
            if (numberMap.find(temp) != numberMap.end()) {
                i = j - 1;
                break;
            }
        }

        numVector.push_back(temp);
    }

    sort(numVector.begin(), numVector.end());

    string result = "";
    for (auto &num : numVector) {
        result += num + " ";
    }

    return result.substr(0, result.length() - 1);
}
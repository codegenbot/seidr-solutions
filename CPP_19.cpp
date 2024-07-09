#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp += numbers[i];
        if (i == numbers.length() - 1 || numbers[i + 1] != ' ') {
            numVector.push_back(temp);
            temp = "";
        }
    }

    sort(numVector.begin(), numVector.end(), [&numMap](const string& a, const string& b) {
        return numMap.at(a) < numMap.at(b);
    });

    string result;
    for (auto &s : numVector) {
        result += s + " ";
    }
    return result;
}
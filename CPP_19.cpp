#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (int j = i + 1; j <= numbers.length(); j++) {
            if (j == numbers.length() || numbers[j] != numbers[i]) {
                temp = numbers.substr(i, j - i);
                i = j - 1;
                break;
            }
        }
        numVec.push_back(temp);
    }

    sort(numVec.begin(), numVec.end(), [&](string a, string b) {
        return numMap.at(a) < numMap.at(b);
    });

    string result;
    for (auto &num : numVec) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}
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
        } else if (i == 0 || numbers[i - 1] != ' ') {
            temp += numbers[i];
        } else {
            temp += numbers[i];
            numVec.push_back(temp);
            temp = "";
        }
    }
    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());

    string result;
    for (int i = 0; i < numVec.size(); i++) {
        if (i == 0 || numMap[numVec[i - 1]] <= numMap[numVec[i]]) {
            result += numVec[i];
        } else {
            break;
        }
    }

    return result;
}
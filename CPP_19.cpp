#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

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
                numVec.push_back(temp);
                break;
            }
        }
    }

    sort(numVec.begin(), numVec.end(), [&](const string &a, const string &b) {
        return to_string(numMap[a]) < to_string(numMap[b]);
    });

    string result = "";
    for (auto str : numVec) {
        result += str + " ";
    }
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}
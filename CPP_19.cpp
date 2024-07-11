#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, 
                               {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                               {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (int j = i + 1; j <= numbers.size(); j++) {
            if (j == numbers.size() || numbers[j] == ' ') {
                temp = numbers.substr(i, j - i);
                numVec.push_back(temp);
                i = j;
                break;
            }
        }
    }

    sort(numVec.begin(), numVec.end(), 
         [&numMap](string a, string b) { return numMap[a] < numMap[b]; });

    string result;
    for (auto &str : numVec) {
        result += str + " ";
    }
    return result.substr(0, result.size() - 1);
}
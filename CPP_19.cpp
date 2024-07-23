#include <algorithm>
#include <map>
#include <vector>
#include <string>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string num;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        int j = i + 1;
        while (j <= numbers.length() && !isdigit(numbers[j])) {
            j++;
        }
        num = numbers.substr(i, j - i);
        i = j;
        numVec.push_back(num);
    }

    sort(numVec.begin(), numVec.end(), [&numMap](string a, string b) {
        return to_string(numMap.at(a)) < to_string(numMap.at(b));
    });

    string result;
    for (const auto& num : numVec) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}
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
        temp += numbers[i];
        for (int j = i + 1; j <= numbers.size(); j++) {
            if (j < numbers.size() && numbers[j] != ' ') {
                break;
            }
            i = j - 1;
            temp += numbers[j];
        }
        numVec.push_back(temp);
        temp.clear();
    }

    sort(numVec.begin(), numVec.end(), [](string a, string b) {
        return to_string(numMap[a]) < to_string(numMap[b]);
    });

    string result = "";
    for (const auto& str : numVec) {
        result += str + " ";
    }
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}
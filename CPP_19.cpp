#include <vector>
#include <algorithm>

string sort_numbers(string numbers) {
    vector<string> numVec;
    string num;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(num);
            num = "";
        } else {
            num += numbers[i];
        }
    }

    numVec.push_back(num);

    sort(numVec.begin(), numVec.end());

    string result;
    for (const auto& str : numVec) {
        result += str + " ";
    }
    return result.substr(0, result.length() - 1);
}
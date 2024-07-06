#include <map>
#include <string>
#include <vector>
#include <algorithm>

std::map<std::string, int> numMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

std::string sort_numbers(std::string numbers) {
    std::vector<std::string> numVec;
    std::string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    numVec.push_back(temp);

    std::sort(numVec.begin(), numVec.end());

    std::string result;
    for (int i = 0; i < numVec.size(); i++) {
        result += numVec[i] + " ";
    }

    return result.substr(0, result.length() - 1);
}
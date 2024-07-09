#include <algorithm>
#include <vector>
#include <map>
#include <string>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                         {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                         {"eight", 8}, {"nine", 9}};
    std::vector<std::string> numVec;
    std::string temp;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp = "";
        while (i < numbers.size() && numbers[i] != ' ') {
            temp += numbers[i];
            i++;
        }
        numVec.push_back(temp);
    }

    std::sort(numVec.begin(), numVec.end(), [&numMap](std::string a, std::string b) {
        return numMap[a] < numMap[b];
    });

    std::string result = "";
    for (const auto &num : numVec) {
        result += num + " ";
    }
    return result;
}
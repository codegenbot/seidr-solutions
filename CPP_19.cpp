#include <algorithm>
#include <map>
#include <vector>
#include <string>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                         {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                         {"eight", 8}, {"nine", 9}};
    std::vector<std::string> numVec;
    std::string num;

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

    std::sort(numVec.begin(), numVec.end(), [&numMap](std::string a, std::string b) {
        return std::to_string(numMap.at(a)) < std::to_string(numMap.at(b));
    });

    std::string result;
    for (const auto& num : numVec) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}
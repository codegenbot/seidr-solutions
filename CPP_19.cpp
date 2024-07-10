#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

std::string sort_numbers(std::string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                        {"four", 4}, {"five", 5}, {"six", 6}};

    std::vector<std::string> numVector;
    std::string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (auto it = numMap.begin(); it != numMap.end(); it++) {
            if (it->first.find(std::string(1, numbers[i])) != std::string::npos) {
                temp = it->first;
                break;
            }
        }
        numVector.push_back(temp);
    }

    std::sort(numVector.begin(), numVector.end());

    std::string result;
    for (auto it = numVector.begin(); it != numVector.end(); it++) {
        result += *it + " ";
    }

    return result.substr(0, result.length() - 1);
}
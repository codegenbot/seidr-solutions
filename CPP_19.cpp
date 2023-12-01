#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cassert>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> numeralMap;
    numeralMap["zero"] = 0;
    numeralMap["one"] = 1;
    numeralMap["two"] = 2;
    numeralMap["three"] = 3;
    numeralMap["four"] = 4;
    numeralMap["five"] = 5;
    numeralMap["six"] = 6;
    numeralMap["seven"] = 7;
    numeralMap["eight"] = 8;
    numeralMap["nine"] = 9;

    std::vector<std::string> numerals;
    std::stringstream ss(numbers);
    std::string temp;
    while (std::getline(ss, temp, ' ')) {
        numerals.push_back(temp);
    }

    std::sort(numerals.begin(), numerals.end(), [&](const std::string& a, const std::string& b) {
        return numeralMap[a] < numeralMap[b];
    });

    std::string sortedNumbers;
    for (const std::string& numeral : numerals) {
        sortedNumbers += numeral + " ";
    }

    sortedNumbers.pop_back();
    return sortedNumbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    std::cout << "Test passed!" << std::endl;
    return 0;
}
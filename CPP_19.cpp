#include <string>
#include <map>

std::string sort_numbers(const std::string& numbers) {
    std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::multimap<int, std::string> sorted_numbers;

    for (std::string::size_type i = 0; i < numbers.size(); ++i) {
        std::string num;
        while (i < numbers.size() && numbers[i] != ' ') {
            num += numbers[i];
            ++i;
        }
        sorted_numbers.insert({num_map[num], num});
    }

    std::string result;
    for (const auto& pair : sorted_numbers) {
        result += pair.second + " ";
    }

    return result;
}
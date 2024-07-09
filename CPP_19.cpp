#include <string>
#include <map>
#include <vector>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                          {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                          {"eight", 8}, {"nine", 9}};
    std::vector<std::string> num_vector;
    std::string temp;
    for (char c : numbers) {
        if (isdigit(c)) continue;
        temp += c;
        if (num_map.find(temp) != num_map.end()) {
            num_vector.push_back(temp);
            temp = "";
        }
    }
    std::sort(num_vector.begin(), num_vector.end());
    std::string result;
    for (std::string s : num_vector) {
        result += s + " ";
    }
    return result;
}
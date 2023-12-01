#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>

std::string sort_numbers(std::string numbers);

std::string sort_numbers(std::string numbers){
    std::map<std::string, int> number_map;
    number_map["zero"] = 0;
    number_map["one"] = 1;
    number_map["two"] = 2;
    number_map["three"] = 3;
    number_map["four"] = 4;
    number_map["five"] = 5;
    number_map["six"] = 6;
    number_map["seven"] = 7;
    number_map["eight"] = 8;
    number_map["nine"] = 9;

    // Split the input string into individual numbers
    std::vector<std::string> number_list;
    std::stringstream ss(numbers);
    std::string token;
    while (std::getline(ss, token, ' ')) {
        number_list.push_back(token);
    }

    // Sort the numbers based on their corresponding values in the map
    std::sort(number_list.begin(), number_list.end(), [&](std::string a, std::string b) {
        return number_map[a] < number_map[b];
    });

    // Construct the sorted string
    std::string sorted_numbers;
    for (int i = 0; i < number_list.size(); i++) {
        sorted_numbers += number_list[i];
        if (i < number_list.size() - 1) {
            sorted_numbers += " ";
        }
    }

    return sorted_numbers;
}
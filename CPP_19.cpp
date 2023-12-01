#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

std::string sort_numbers(std::string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}

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

    std::vector<int> number_values;
    std::stringstream ss(numbers);
    std::string number;
    while (std::getline(ss, number, ' ')) {
        number_values.push_back(number_map[number]);
    }

    std::sort(number_values.begin(), number_values.end());

    std::string sorted_numbers;
    for (int i = 0; i < number_values.size(); i++) {
        for (auto it = number_map.begin(); it != number_map.end(); ++it) {
            if (it->second == number_values[i]) {
                sorted_numbers += it->first + " ";
                break;
            }
        }
    }

    sorted_numbers.pop_back(); // remove trailing space

    return sorted_numbers;
}
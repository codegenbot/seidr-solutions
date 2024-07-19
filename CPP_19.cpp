#include <iostream>
#include <map>
#include <algorithm>
#include <string>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> number_map = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    std::vector<std::string> numbers_vec;
    std::string num;
    for (char c : numbers) {
        if (c == ' ') {
            numbers_vec.push_back(num);
            num = "";
        } else {
            num += c;
        }
    }
    numbers_vec.push_back(num);

    std::sort(numbers_vec.begin(), numbers_vec.end(), [&](const std::string &a, const std::string &b) {
        return number_map[a] < number_map[b];
    });

    std::string sorted_numbers;
    for (const std::string &num : numbers_vec) {
        sorted_numbers += num + " ";
    }
    sorted_numbers.pop_back(); // remove extra space at the end

    return sorted_numbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}
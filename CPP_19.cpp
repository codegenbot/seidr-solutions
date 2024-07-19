#include <map>
#include <string>
using namespace std;

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

string sort_numbers(string numbers);

string sort_numbers(string numbers){
    string result = "";
    std::map<int, std::string> sorted_numbers;

    size_t pos = 0;
    while ((pos = numbers.find(" ")) != std::string::npos) {
        std::string num = numbers.substr(0, pos);
        sorted_numbers[number_map[num]] = num;
        numbers.erase(0, pos + 1);
    }
    sorted_numbers[number_map[numbers]] = numbers;

    for (const auto& pair : sorted_numbers) {
        result += pair.second + " ";
    }

    return result.substr(0, result.size() - 1);
}
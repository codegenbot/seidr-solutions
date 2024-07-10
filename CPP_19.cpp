#include <map>
#include <string>

std::string sort_numbers(std::string numbers){
    std::map<std::string, int> num_map = {
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

    std::map<int, std::string> rev_map;
    for(auto const& pair : num_map){
        rev_map[pair.second] = pair.first;
    }
    
    std::string result = "";
    size_t pos = 0;
    while((pos = numbers.find(" ")) != std::string::npos){
        std::string token = numbers.substr(0, pos);
        numbers.erase(0, pos + 1);
        result += rev_map[num_map[token]] + " ";
    }
    result += rev_map[num_map[numbers]];
    
    return result;
}
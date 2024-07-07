```cpp
#include <vector>
#include <string>

std::vector<std::string> concatenate(const std::vector<std::pair<std::string, int>>& strings) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        // Process the string as per your requirement
        std::string processedString = "";
        for(int i=0; i < str.second; i++)
            processedString += str.first;
        result.push_back(processedString);
    }
    return result;
}

std::vector<std::string> concatenate(const std::vector<std::pair<std::string, int>>& strings) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        // Process the string as per your requirement
        std::string processedString = "";
        for(int i=0; i < str.second; i++)
            processedString += str.first;
        result.push_back(processedString);
    }
    return result;
}
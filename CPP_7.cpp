#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& vec, const std::string& substr){
    std::vector<std::string> result;
    for(const auto& str : vec){
        if(str.find(substr) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main()
{
    std::vector<std::string> data = {"apple", "banana", "orange", "grape", "melon"};
    std::string searchTerm = "an";

    std::vector<std::string> filteredData = filter_by_substring(data, searchTerm);

    for(const auto& str : filteredData){
        std::cout << str << std::endl;
    }

    return 0;
}
#include <map>
#include <string>
#include <algorithm>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    bool lower = true;
    bool upper = true;

    for (const auto& pair : dict) {
        if (!pair.first.empty()) {
            if (std::any_of(pair.first.begin(), pair.first.end(), ::isupper)) {
                upper = false;
            }
            if (std::any_of(pair.first.begin(), pair.first.end(), ::islower)) {
                lower = false;
            }
        }
    }

    return lower && upper;
}

int main() {
    std::map<std::string, std::string> dict;
    std::string key;

    std::cout << "Enter a dictionary of word-meanings (format: word meaning, each pair on a new line). Type 'stop' to finish input." << std::endl;

    while(true){
        std::cin >> key >> std::string();
        if(key == "stop") break;
        dict.insert({key,""});
    }

    if(check_dict_case(dict)){
        std::cout << "The case is consistent!" << std::endl;
    }else{
        std::cout << "The case is not consistent!" << std::endl;
    }

    return 0;
}
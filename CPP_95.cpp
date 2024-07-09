#include <map>
#include <string>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    for (const auto& pair : dict) {
        if (!std::all_of(pair.second.begin(), pair.second.end(),
                         [&pair](char c){ return std::tolower(c) == c; })) {
            return false;
        }
    }
    return true;
}

int main() {
    std::map<std::string, std::string> dict;
    std::string key;

    std::cout << "Enter a dictionary of word-meanings (format: word meaning, each pair on a new line). Type 'stop' to finish input." << std::endl;

    while(true){
        std::cin >> key;
        string temp;
        std::cin >> temp;
        if(key == "stop") break;
        dict.insert({key,temp});
    }

    if(check_dict_case(dict)){
        std::cout << "The case is consistent!" << std::endl;
    }else{
        std::cout << "The case is not consistent!" << std::endl;
    }

    return 0;
}
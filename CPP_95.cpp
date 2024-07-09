#include <map>
#include <string>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    bool firstLower = true;

    for (const auto& pair : dict) {
        if (firstLower && std::all_of(pair.second.begin(), pair.second.end(), ::islower)) {
            firstLower = false;
        } else if (!firstLower && !std::all_of(pair.second.begin(), pair.second.end(), ::islower)) {
            return false;
        }
    }

    return true;
}

int main() {
    std::map<std::string, std::string> dict;

    cout << "Enter a dictionary of word-meanings (format: word meaning, each pair on a new line). Type 'stop' to finish input." << endl;

    while(true){
        string key;
        cin >> key >> string();
        if(key == "stop") break;
        dict.insert({key,""});
    }

    if(check_dict_case(dict)){
        cout << "The case is consistent!" << endl;
    }else{
        cout << "The case is not consistent!" << endl;
    }

    return 0;
}
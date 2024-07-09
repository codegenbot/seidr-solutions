#include <map>
#include <string>
#include <algorithm>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    bool upper = false;
    bool lower = false;

    for (const auto& pair : dict) {
        if (std::all_of(pair.second.begin(), pair.second.end(), ::isupper)) upper = true;
        else if (std::all_of(pair.second.begin(), pair.second.end(), ::islower)) lower = true;
    }

    return !((upper && lower) || (!upper && !lower));
}

int main() {
    std::map<std::string, std::string> dict;
    string key;

    cout << "Enter a dictionary of word-meanings (format: word meaning, each pair on a new line). Type 'stop' to finish input." << endl;

    while(true){
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
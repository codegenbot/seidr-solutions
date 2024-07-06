#include <map>
#include <string>

bool check_dict_case(map<string, string> dict);

int main() {
    map<string, string> myDict = {{"Hello", "world"}, {"HI", "WORLD"}};
    bool result = check_dict_case(myDict);
    if (result) {
        cout << "The dictionary case is either all upper or all lower." << endl;
    } else {
        cout << "The dictionary case is mixed." << endl;
    }
    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_lower && !all_upper) break;
        if (!all_lower) all_lower = tolower(key[0]) == 0;
        if (!all_upper) all_upper = toupper(key[0]) == 0;
    }

    return all_lower || all_upper;
}
#include <map>
#include <string>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0])) allLower = false;
        if (!isupper(pair.first[0])) allUpper = false;
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    map<string, string> dict1 = {{"hello", "world"}, {"HELLO", "WORLD"}};
    cout << (check_dict_case(dict1) ? "True" : "False") << endl;
    
    map<string, string> dict2 = {{"Hello", "World"}, {"hELLO", "wORLD"}};
    cout << (check_dict_case(dict2) ? "True" : "False") << endl;
    
    map<string, string> dict3 = {{"HELLO", "WORLD"}, {"hello", "world"}};
    cout << (check_dict_case(dict3) ? "True" : "False") << endl;
    
    return 0;
}
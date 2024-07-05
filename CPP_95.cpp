#include<cctype>

bool check_dict_case(map<string,string> dict){
    if (dict.empty()) return false;
    
    bool allLower = true, allUpper = true;
    
    for (const auto& pair : dict) {
        for (char ch : pair.first) {
            if (!isalpha(ch)) return false;
            if (islower(ch)) allUpper = false;
            if (isupper(ch)) allLower = false;
        }
    }
    
    return allLower || allUpper;
}
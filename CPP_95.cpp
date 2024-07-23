```cpp
bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {  
        if (!islower(pair.first[0])) allLower = false;
        if (!isupper(pair.first[0])) allUpper = false;
        if (!islower(*pair.second.begin())) allLower = false;
        if (!isupper(*pair.second.begin())) allUpper = false;
    }

    return allLower && !allUpper || !allLower && allUpper;
}
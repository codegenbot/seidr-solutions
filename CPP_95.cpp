int main() {
    map<string, string> dict;
    dict["a"] = "apple";
    dict["A"] = "Apple";
    bool result = check_dict_case(dict);
    return 0;
}
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
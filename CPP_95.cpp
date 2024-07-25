```cpp
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (allLower && isupper(pair.first[0])) {
            allLower = false;
        } else if (allUpper && islower(pair.first[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    map<string, string> dict;
    // Add your test cases here
    bool result1 = check_dict_case(dict);
    cout << "Result 1: " << (result1 ? "true" : "false") << endl;

    return 0;
}
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
    // Add your code here to populate the dictionary
    // For example:
    dict["hello"] = "world";
    dict["HELLO"] = "WORLD";

    bool result = check_dict_case(dict);
    if (result) {
        cout << "The dictionary contains both lowercase and uppercase keys." << endl;
    } else {
        cout << "The dictionary contains only one type of case for its keys." << endl;
    }

    return 0;
}
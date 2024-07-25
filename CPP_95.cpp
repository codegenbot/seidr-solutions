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
    // Add your test code here...
    map<string, string> dict = {{"hello", "world"}, {"HELLO", "WORLD"}};
    cout << (check_dict_case(dict) ? "Dictionary has only one case" : "Dictionary has both lower and upper cases");
    return 0;
}
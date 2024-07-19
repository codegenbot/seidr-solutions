#include <string>
#include <map>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0]) && !islower(pair.first[0])) {
            allUpper = false;
            allLower = false;
            break;
        } else if ((isupper(pair.first[0]) && !allUpper) || (islower(pair.first[0]) && !allLower)) {
            allUpper = false;
            allLower = false;
        }
    }

    return allUpper || allLower;
}

int main() {
    map<string, string> dict;
    // code to fill the dictionary
    bool result = check_dict_case(dict);
    if (result) {
        cout << "All keys are either in upper case or lower case." << endl;
    } else {
        cout << "Not all keys are either in upper case or lower case." << endl;
    }
    return 0;
}
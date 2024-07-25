```cpp
#include <map>
#include <string>

int main() {
    map<string, string> dict;
    // Add your logic here to populate the dictionary.
    bool result = check_dict_case(dict);
    if (result) {
        cout << "All keys in the dictionary are either all lowercase or all uppercase." << endl;
    } else {
        cout << "The dictionary contains a mix of both lowercase and uppercase keys." << endl;
    }
    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) {
            break;
        }

        if (!allLower) continue;

        for (char& c : pair.first) {
            if (!islower(c)) {
                allLower = false;
                break;
            }
        }

        if (!allUpper) continue;

        for (char& c : pair.first) {
            if (!isupper(c)) {
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}
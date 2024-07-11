#include <string>
#include <map>

using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (islower(it->first[0]))
            allUpper = false;
        else
            allLower = false;
    }

    return allLower || allUpper;
}

int main() {
    map<string, string> dict;

    // Your code here...

    bool result = check_dict_case(dict);

    cout << "Result: " << (result ? "True" : "False") << endl;

    return 0;
}
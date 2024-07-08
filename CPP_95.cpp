#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, string> myDict = {{"key1", "value1"}, {"KEY2", "value2"}};
    cout << boolalpha << check_dict_case(myDict) << endl;
    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (islower(pair.first[0])) allLower = false;
        else if (isupper(pair.first[0])) allUpper = false;
        else return false;
    }

    return allLower || allUpper;
}
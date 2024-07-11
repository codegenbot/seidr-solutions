```cpp
#include <map>
#include <string>
using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0])) {
            allLower = false;
        }
        if (!isupper(pair.first[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    map<string, string> dictionary;
    
    // implement your code here

    // use the check_dict_case function here
    bool result = check_dict_case(dictionary);
    
    if (result) 
        cout << "All keys are either in uppercase or lowercase.\n";
    else
        cout << "The dictionary contains both upper and lower case keys.\n";

    return 0;
}
#include <string>
#include <cctype>
#include <map>
using namespace std;

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {  
        bool isLower = true;
        for(char c: pair.first) {
            if (!islower(c)) {
                isLower = false;
                break;
            }
        }
        bool isUpper = true;
        for(char c: pair.first) {
            if (!isupper(c)) {
                isUpper = false;
                break;
            }
        }

        allLower &= isLower;
        allUpper &= isUpper;
    }

    return (!allLower && allUpper) || allLower && !allUpper;
}
#include <string>
#include <map>
using namespace std;

bool check_dict_case(map<string, string>& dict) {
    if (dict.empty()) return false;
    
    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = tolower(it->first).find((char)0) == string::npos;
        if (allLower) allLower = toupper(it->first).find((char)0) == string::npos;
    }

    return allUpper && allLower;
}

int main() {
    map<string, string> dict; 
    assert(check_dict_case(dict) == false); 
    return 0;
}
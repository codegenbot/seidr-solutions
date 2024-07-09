```cpp
#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    string first_key = *(dict.begin()->first);
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(toupper(itostr(first_key)) != toupper(it->first)) return false;
    }
    
    return true;
}

string main(map<string, string> dict) {
    bool result = check_dict_case(dict);
    if(result) {
        cout << "Dictionary is in case-insensitive order." << endl;
    } else {
        cout << "Dictionary is not in case-insensitive order." << endl;
    }
}
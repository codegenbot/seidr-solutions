```cpp
#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    string first_key = *(dict.begin()->first);
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(toupper(first_key) != toupper(it->first)) return false;
    }
    
    return true;
}

string main() {
    map<string, string> dict;
    cout << "Enter the key-value pairs (separated by comma and space):" << endl;
    string input;
    getline(cin, input);
    int i = 0;
    for (;i < input.length(); i++) {
        if(input[i] == ',') {
            input[i] = '\n';
        }
    }
    size_t pos = 0, pos2 = 0;
    while ((pos = input.find(" ")) != string::npos) {
        pos2 = input.find(", ", pos);
        if(pos2 != string::npos) {
            string key = input.substr(pos, pos2 - pos);
            pos = pos2 + 2;
            size_t lastComma = input.find(",", pos);
            if(lastComma == string::npos)
                break;
            string value = input.substr(pos, lastComma - pos);
            dict[key] = value;
            pos = lastComma + 1;
        } else {
            break;
        }
    }
    
    if(check_dict_case(dict))
        return "Dictionary case is consistent";
    else
        return "Dictionary case is inconsistent";
}
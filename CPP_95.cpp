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
    cout << "Enter key-value pairs in the format 'key value'. Enter 'stop' to finish. ";
    string line;
    while(getline(cin, line)){
        if(line == "stop") break;
        size_t space = line.find(' ');
        string key = line.substr(0, space);
        string value = line.substr(space+1);
        dict[key] = value;
    }
    
    if(check_dict_case(dict))
        return "All keys are in the same case.";
    else
        return "Some keys are not in the same case as the first one.";
}
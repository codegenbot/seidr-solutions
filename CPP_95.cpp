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
    cin >> dict;
    if(check_dict_case(dict)){
        for(auto it = dict.begin(); it != dict.end(); ++it){
            cout << "Key: " << it->first << ", Value: " << it->second << endl;
        }
    } else{
        return "Invalid Dictionary";
    }
}
#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    string first_key = dict.begin()->first;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(toupper(first_key) != toupper(it->first)) return false;
    }
    
    return true;
}

int main() {
    map<string,string> my_dict;
    cout << check_dict_case(my_dict);
    return 0;
}
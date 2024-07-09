#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    const char* first_key = (*(dict.begin()->first)).c_str();
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(toupper(first_key) != toupper(it->first.c_str())) return false;
    }
    
    return true;
}

int main() {
    map<string,string> myMap;
    // add elements to your map
    cout << check_dict_case(myMap) << endl;
}
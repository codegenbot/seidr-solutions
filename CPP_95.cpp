#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    const char* first_key = *(dict.begin()->first).c_str();
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(toupper(first_key) != toupper(it->first.c_str())) return false;
    }
    
    return true;
}

int main() {
    map<string, string> myDict = {{"hello", "Hello"}, {"world", "World"}};
    if(check_dict_case(myDict)) 
        cout << "All key-value pairs in the dictionary are in camel case.\n";
    else
        cout << "Not all key-value pairs in the dictionary are in camel case.\n";

    return 0;
}
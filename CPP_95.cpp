#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    string first_key = *(dict.begin()->first);
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(std::toupper(first_key[0]) != std::toupper(it->first[0])) return false;
    }
    
    return true;
}

int main() {
    map<string,string> my_dict;
    // Add keys and values to the dictionary
    my_dict["apple"] = "red";
    my_dict["banana"] = "yellow";
    my_dict["cherry"] = "red";
    
    cout << (check_dict_case(my_dict) ? "The dictionary is case-insensitive." : "The dictionary is not case-insensitive.") << endl;
}
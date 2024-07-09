#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    const char* first_key = (dict.begin()->first).c_str();
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        const char* curr_key = it->first.c_str();
        if(toupper(first_key) != toupper(curr_key)) return false;
    }
    
    return true;
}

int main() {
    map<string,string> my_map = {{"test1", "hello"}, {"TEST1", "world"}};
    cout << (check_dict_case(my_map) ? "Case is consistent" : "Case is inconsistent") << endl;
}
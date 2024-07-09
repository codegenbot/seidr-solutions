#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    string first_key = *(dict.begin()->first);
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(toupper(first_key.c_str()) != toupper(it->first.c_str())) return false;
    }
    
    return true;
}

int main() {
    map<string,string> my_dict;

    cout << "Enter the dictionary elements in the format 'key:value' (enter 'stop' to finish):" << endl;

    string input;

    while(true){
        cin >> input;
        if(input == "stop") break;
        size_t space_pos = input.find(' ');
        string key = input.substr(0, space_pos);
        string value = input.substr(space_pos+1);
        my_dict[key] = value;
    }

    bool result = check_dict_case(my_dict);

    cout << (result ? "The dictionary has consistent case." : "The dictionary does not have consistent case.") << endl;

    return 0;
}
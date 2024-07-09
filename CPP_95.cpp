#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    auto [key, _] = *dict.begin();
    
    string first_key = key;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(std::toupper(first_key[0]) != std::toupper(it->first[0])) return false;
    }
    
    return true;
}

int main() {
    map<string,string> dictionary;
    string input;
    while(true){
        cout << "Enter a key-value pair (or 'q' to quit): ";
        cin >> input;
        if(input == "q") break;
        string value;
        cin >> value;
        dictionary[input] = value;
    }
    if(check_dict_case(dictionary)) {
        cout << "All keys in the same case.\n";
    } else {
        cout << "Keys have mixed case.\n";
    }
}
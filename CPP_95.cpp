#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    string first_key = *(dict.begin()->first);
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        if(std::transform(it->first.begin(), it->first.end(), it->first.begin(), ::toupper) != it->first.end()) return false;
    }
    
    return true;
}

int main() {
    map<string,string> dict; // Your code here
    string key;
    int choice;

    cout << "Enter number of words to add to dictionary: ";
    cin >> choice;

    for(int i = 0; i < choice; ++i){
        cout << "Enter word and its case-sensitive equivalent separated by space: ";
        cin >> key;
        
        dict[key] = key;
    }

    if(check_dict_case(dict)){
        cout << "All words are in same case." << endl;
    } else {
        cout << "Words have different cases." << endl;
    }
}
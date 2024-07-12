#include <iostream>
using namespace std;

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == 0) 
            result.push_back(s); 
    } 
    return result;
}

int main() {
    vector<string> strings;
    string prefix;

    cout << "Enter the list of strings (space-separated): ";
    getline(cin, input_string);
    istringstream iss(input_string);
    while (iss >> string) {
        strings.push_back(string);
    }

    cout << "Enter the prefix: ";
    cin >> prefix;

    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    for(auto s : filtered_strings) {
        cout << s << endl;
    }
    
    return 0;
}
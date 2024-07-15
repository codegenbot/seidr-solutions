#include <iostream>
#include <vector>
#include <string>
#include <cassert> 

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> strings;
    string substring;
    string input;

    getline(cin, input);
    istringstream iss(input);
    string temp;
    
    while(iss >> temp){
        strings.push_back(temp);
    }

    cin >> substring;
    
    vector<string> result = filter_by_substring(strings, substring);
    
    for(auto& str : result){
        cout << str << endl;
    }

    return 0;
}
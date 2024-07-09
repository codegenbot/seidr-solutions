#include <vector>
#include <string>
#include <iostream>

vector<string> filter_by_substring(vector<string> strings, string substring);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto &str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    // Test the function
    vector<string> strings = {"apple", "banana", "orange", "grape"};
    string substring = "an";
    
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    for(const auto &str : filtered_strings){
        cout << str << " ";
    }

    return 0;
}
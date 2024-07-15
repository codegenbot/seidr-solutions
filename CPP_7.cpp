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

    // Read strings from user input
    cout << "Enter the strings (type 'done' to finish input):" << endl;
    while (getline(cin, input) && input != "done") {
        strings.push_back(input);
    }

    // Read substring from user input
    cout << "Enter the substring to filter by:" << endl;
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);

    // Output the filtered strings
    cout << "Filtered strings:" << endl;
    for (const auto& str : result) {
        cout << str << endl;
    }

    return 0;
}
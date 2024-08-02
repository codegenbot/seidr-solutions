```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_substring(const vector<string>& strings, const string& substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> strings = {"hello", "world", "hell", "world"};
    string substring = "world";
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if(issame(filtered_strings, strings))
        std::cout << "All strings contain the substring." << std::endl;
    else
        std::cout << "Not all strings contain the substring." << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

bool issame(string str1, string str2){
    return str1 == str2;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}
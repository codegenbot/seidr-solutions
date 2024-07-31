#include <string>
#include <vector>
#include <cassert>

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i = 0; i < str.length(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}

int main() {
    // Main function implementation
    return 0;
}
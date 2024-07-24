#include <string>
#include <vector>

bool issame(char a, char b){
    return a == b;
}

vector<string> all_prefixes(string str);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    
    for (char ch : str) {
        prefix += ch;
        prefixes.push_back(prefix);
    }
    
    return prefixes;
}

int main() {
    // Your main function code here
    return 0;
}
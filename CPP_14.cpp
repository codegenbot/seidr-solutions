#include <vector>
#include <string>

bool issame(string a, string b);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(string a, string b) {
    return a == b;
}

int main() {
    // Main function code here
    return 0;
} 
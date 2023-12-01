#include <vector>
using namespace std;

vector<string> all_prefixes(string str);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b){
    // existing code here
}
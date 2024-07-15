#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b);
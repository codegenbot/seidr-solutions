#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    vector<string> test = all_prefixes("hello");
    assert(test.size() == 5);
}
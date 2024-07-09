#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    vector<string> result = all_prefixes("WWW");
    for (const auto& prefix : result) {
        cout << prefix << " ";
    }
    return 0;
}
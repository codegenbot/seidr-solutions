#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame({{"grunt", "trumpet", "prune", "gruesome"}, {"run"}}, {{"grunt", "prune"}}));
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    
    for(string s : result) {
        cout << s << endl;
    }
}
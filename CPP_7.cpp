#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos){
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> output = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(issame(output, {"grunt", "prune"}) && "filter_by_substring did not work correctly");
    return 0;
}
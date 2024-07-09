#include <vector>
#include <string>
using namespace std;

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return (a == b);
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}
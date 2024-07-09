#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings) {
        if(s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> expected = {"grunt", "prune"};
    vector<string> actual = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    std::vector<std::string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    if(issame(result, expected)) {
        cout << "Filtering is working correctly." << endl;
    }
    else {
        cout << "Filtering is not working correctly." << endl;
    }
    return 0;
}
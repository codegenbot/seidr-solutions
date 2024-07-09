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
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> expected = {"grunt", "prune"};
    vector<string> actual = filter_by_substring(strings, substring);
    if (!issame(actual, expected)) {
        for (const auto& s : strings) {
            if (s.find(substring) != std::string::npos) {
                cout << s << endl;
            }
        }
    } else {
        cout << "All elements in the actual vector are present in the expected vector." << endl;
    }
    return 0;
}
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size()) return false;
    for(std::string s : v1) {
        if(std::find(v2.begin(), v2.end(), s) == v2.end()) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> str1 = {"apple", "banana", "cherry"};
    vector<string> str2 = {"banana", "mango", "pineapple"};

    cout << (issame(filter_by_substring(str1, "a"), filter_by_substring(str2, "a")) ? "True" : "False") << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);
vector<string> filter_by_prefix(vector<string> strings, string prefix);

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main_func() {
    int n;
    std::cin >> n;

    vector<string> words(n);

    for (auto &word : words) {
        std::cin >> word;
    }

    string prefix;
    std::cin >> prefix;

    bool same = issame(words, filter_by_prefix(words, prefix));

    if(same)
        std::cout << "Same" << std::endl;
    else
        std::cout << "Not Same" << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;

}
int main() {
    vector<string> a;
    std::cout << "Enter strings (stop when empty):" << std::endl;
    std::string s;
    while (std::getline(std::cin, s)) {
        if (s.empty()) break;
        a.push_back(s);
    }

    vector<string> b = a;
    bool same = issame(a, b);

    std::string prefix;
    std::cout << "Enter prefix:" << std::endl;
    std::cin >> prefix;
    vector<string> result = filter_by_prefix(a, prefix);

    if(!same) 
        std::cout << "Strings are not the same." << std::endl;
    else 
        std::cout << "Strings are the same." << std::endl;

    for(string s : result) {
        std::cout << s << std::endl;
    }

    return 0;
}
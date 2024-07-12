```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

pair<string, string> toPair(string s1, string s2) {
    return make_pair(s1, s2);
}

int main() {
    vector<pair<string, string>> extensions;
    pair<string, string> sp_pair = {"Sp", "671235"};
    pair<string, string> bb_pair = {"Bb", ""};
    extensions.push_back(sp_pair);
    extensions.push_back(bb_pair);

    for (const auto& extension : extensions) {
        cout << Strongest_Extension(extension) << endl; 
    }
}

std::string Strongest_Extension(const std::pair<std::string, std::string>& extension) {
    if (extension.second.empty()) {
        return extension.first;
    } else {
        return extension.first + "." + extension.second;
    }
}
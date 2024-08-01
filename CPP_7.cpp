```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }

    string substring;
    std::cin >> substring;

    vector<string> filtered = filter_by_substring(strings, substring);

    vector<vector<string>> groups(1);
    for(string s : filtered) {
        bool found = false;
        for(vector<string>& group : groups) {
            if(issame(group, {s})) {
                group.push_back(s);
                found = true;
                break;
            }
        }
        if(!found)
            groups.push_back({s});
    }

    for(vector<string>& group : groups) {
        std::cout << "{";
        for(string s : group) {
            std::cout << s << " ";
        }
        std::cout << "}" << std::endl;
    }

    return 0;
}
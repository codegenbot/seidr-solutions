#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<vector<string>> b){
    for(auto str : a) {
        bool found = false;
        for(auto vec : b) {
            if(find(vec.begin(), vec.end(), str) != vec.end()) {
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    vector<vector<string>> lists(n);

    for(int i = 0; i < n; ++i) {
        int m;
        std::cin >> m;

        for(int j = 0; j < m; ++j) {
            string s;
            std::cin >> s;
            lists[i].push_back(s);
        }
    }

    vector<string> same;
    for(auto &list : lists)
        if(issame(filter_by_substring(list, "same"), lists))
            same.insert(cend(same), cend(list));

    std::cout << size(same) << '\n';

    return 0;
}
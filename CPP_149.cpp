```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> lst;
    std::string str;
    std::cout << "Enter strings (enter 'stop' to finish): ";
    while (true) {
        std::cin >> str;
        if (str == "stop") break;
        lst.push_back(str);
    }
    vector<vector<string>> expected = sorted_list_sum(lst);
    return 0;
}

bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;
    for(auto str : lst) {
        int sum = 0;
        vector<string> temp;
        for(char c : str) {
            if(c >= '0' && c <= '9') {
                sum += (c - '0');
                temp.push_back(string(1, c));
            }
        }
        sort(temp.begin(), temp.end());
        result.push_back(temp);
    }
    return result;
}
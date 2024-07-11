#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> arr, string sub) {
    vector<string> result;
    for (auto s : arr) {
        if (s.find(sub) != string::npos)
            result.push_back(s);
    }
    return result;

int main() {
    int numSets;
    std::cin >> numSets;
    
    vector<vector<string>> sets(numSets);
    
    for (int i = 0; i < numSets; i++) {
        int numStrings;
        std::cin >> numStrings;
        
        sets[i].resize(numStrings);
        
        for (int j = 0; j < numStrings; j++) {
            std::cin >> sets[i][j];
        }
    }
    
    string subStr;
    std::cin >> subStr;
    
    vector<string> result;
    
    for (auto s : sets[0]) {
        bool found = false;
        for (int i = 1; i < numSets; i++) {
            if (!issame(sets[i], {s})) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(s);
        }
    }
    
    std::cout << "The result is:" << std::endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }
    
    return 0;
}
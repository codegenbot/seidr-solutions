```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

bool issame(const std::vector<std::vector<std::string>>& v1, const std::vector<std::vector<std::string>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i].size() != v2[i].size()) return false;
        for (int j = 0; j < v1[i].size(); ++j) {
            if (v1[i][j] != v2[i][j]) return false;
        }
    }
    return true;
}

std::vector<std::vector<std::string>> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::vector<std::string>> result;
    for (const auto& str : lst) {
        int sum = 0;
        std::vector<std::string> wordList = {{}}; // Initialize wordList
        for (const auto& word : str) {
            if (isdigit(word[0])) {
                sum += stoi(word);
            } else {
                wordList.push_back(word);
            }
        }
        if (!wordList.empty()) {
            std::sort(wordList.begin(), wordList.end());
            result.push_back({std::to_string(sum), wordList[0]});
        }
    }
    return result;
}

int newMain() { 
    std::vector<std::string> lst;
    std::string str;
    std::cout << "Enter strings (enter 'stop' to finish): ";
    while (true) {
        std::getline(std::cin, str);
        if (str == "stop") break;
        std::istringstream iss(str);
        std::string word;
        while (std::getline(iss, word, ' ')) {
            lst.push_back(word);
        }
    }
    std::vector<std::vector<std::string>> expected = sorted_list_sum(lst);
    assert(issame(expected, {{{"cc"}, {"dd"}, {"aaaa"}, {"bbbb"}}}));
    return 0;
}
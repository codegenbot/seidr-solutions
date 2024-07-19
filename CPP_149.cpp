```cpp
#include <iostream>
#include <vector>
#include <algorithm>

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
        std::vector<std::string> wordList;
        for (const auto& word : str) {
            if (isdigit(word[0])) {
                sum += stoi(word);
            } else {
                wordList.push_back(word);
            }
        }
        if (!wordList.empty()) {
            std::sort(wordList.begin(), wordList.end());
            result.push_back({std::to_string(sum), &wordList[0]});
        }
    }
    return result;
}

int main() {
    std::vector<std::string> lst;
    std::string str;
    std::cout << "Enter strings (enter 'stop' to finish): ";
    while (true) {
        std::cin >> str;
        if (str == "stop") break;
        lst.push_back(str);
    }
    std::vector<std::vector<std::string>> expected = sorted_list_sum(lst);
    for (const auto& expected : {"cc", "dd", "aaaa", "bbbb"}) {
        bool found = false;
        for (const auto& result : expected) {
            if (result[0] == expected) {
                found = true;
                break;
            }
        }
        std::cout << found << std::endl;
    }
    return 0;
}
```cpp
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
    bool issame(std::vector<std::string> a, std::vector<std::string> b) {
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    std::vector<std::vector<std::string>> sorted_list_sum(std::vector<std::string> lst) {
        std::vector<std::vector<std::string>> result;
        for(auto& str : lst) {
            int count = 0;
            for(char c : str) {
                if(c == 'a') count++;
            }
            result.push_back({{std::to_string(count), str}});
        }
        return sort_and_group(result);
    }

    std::vector<std::vector<std::string>> sort_and_group(std::vector<std::vector<std::string>> lst) {
        std::sort(lst.begin(), lst.end());
        for(int i = 0; i < lst.size(); i++) {
            if(i > 0 && issame(lst[i], lst[i-1])) {
                lst[i] = {lst[i][0], "aaaa"};
                while(i+1 < lst.size() && issame(lst[i+1], lst[i])) {
                    lst.erase(lst.begin()+i+1);
                }
            }
        }
        return lst;
    }

    assert(issame(expected, {{"cc"}, {"dd"}, {"aaaa"}, {"bbbb"}}));
    return 0;
}
#include <algorithm>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        bool added = false;
        for (auto it = result.begin(); it != result.end(); ++it) {
            if (*it == str) {
                added = true;
                break;
            }
        }
        if (!added) {
            int sum = 0;
            for (char c : str) sum += c;
            std::string newStr;
            for (int i = 0; i < lst.size(); ++i) {
                for (auto c : lst[i]) {
                    if ((sum + c) % 2 == 0 && i < result.size()) continue;
                    if ((sum - c) % 2 == 0 && i >= result.size()) continue;
                    newStr += c;
                }
            }
            result.push_back(newStr);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

std::vector<string> vector_sort(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b){ return (a.size() % 2 == 1 && b.size() % 2 == 0) || (a.size() % 2 == 0 && b.size() % 2 == 1); });
    lst.erase(unique(it, lst.end()), lst.end());

    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b){
            if(a.size() != b.size())
                return (a.size() < b.size());
            else
                return a < b;
        }
    );

    return lst;
}
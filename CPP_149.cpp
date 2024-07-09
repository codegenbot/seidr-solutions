#include <algorithm>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (issame(a[i], b[i])) return true;
    }
    return false;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    vector<string> temp;
    for(auto s : lst) {
        for(int i = 0; i < s.size(); i++) {
            temp.push_back(string(1,s[i]));
        }
    }
    sort(temp.begin(), temp.end());
    int sum = 0, prevSum = 0;
    string prev;
    vector<string> result;
    for(auto& str : unique(temp)) {
        while(sum < prevSum) {
            if(!result.empty() && result.back() == prev) {
                sum += s2i(prev);
                break;
            }
            result.push_back(prev);
            sum += s2i(prev);
            prevSum = sum;
        }
        if(!str.empty()) {
            while(s2i(str) > sum) {
                if(!result.empty() && result.back() == str) {
                    sum -= s2i(str);
                    break;
                }
                result.pop_back();
                sum -= s2i(result.back());
            }
        } else {
            while(sum < prevSum) {
                if(!result.empty() && result.back() == "0") {
                    sum = 0;
                    break;
                }
                result.pop_back();
                sum -= s2i(result.back());
            }
        }
    }
    return result;
}

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    assert(issame(sorted_list_sum(lst) , {"ccc", "dd", "aaaa", "bbbb"}));
    return 0;
}
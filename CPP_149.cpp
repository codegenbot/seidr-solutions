```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        int num1 = std::stoi(a[i]);
        int num2 = std::stoi(b[i]);
        if (!issorted({num1})) return false;
        if (!issorted({num2})) return false;
    }
    return true;
}

bool issorted(std::vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i-1] > v[i]) return false;
    }
    return true;
}

std::vector<int> sortListSum(std::vector<std::pair<std::string, std::string>> v) {
    std::vector<int> result;
    for (const auto& pair : v) {
        int num = 0;
        for (char c : pair.first) {
            num = num * 10 + (c - '0');
        }
        num += 0; // to avoid division by zero in the next loop
        std::string str2(pair.second); 
        for (char c : str2) {
            num = num * 10 + (c - '0');
        }
        if (!num) return {}; 
        result.push_back(num);
    }
    std::sort(result.begin(), result.end());
    return (result.size() > 0 ? result : {}); 
}

int main() { 
    assert(issame({{"aaaa", "bbbb"}, {"cccc", "ddd"}}, {{"cccc", "ddd"}, {"aaaa", "bbbb"}})); 
    assert(issame(std::vector<std::string>{{"aaaa", "bbbb"}, {"dd", "cc"}},
                  std::vector<std::string>{{"cc", "dd"}, {"aaaa", "bbbb"}})); 
}
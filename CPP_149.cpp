```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::pair<std::string, std::string>> a, std::vector<std::pair<std::string, std::string>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        int num1 = 0;
        int num2 = 0;
        for (char c : a[i].first) {
            num1 = num1 * 10 + (c - '0');
        }
        for (char c : a[i].second) {
            num1 = num1 * 10 + (c - '0');
        }
        for (char c : b[i].first) {
            num2 = num2 * 10 + (c - '0');
        }
        for (char c : b[i].second) {
            num2 = num2 * 10 + (c - '0');
        }
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
        for (char c : pair.second) {
            num = num * 10 + (c - '0');
        }
        if (!num) return result; 
        result.push_back(num);
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() { 
    std::vector<std::pair<std::string, std::string>> v1 = {{"aaaa", "bbbb"}, {"cccc", "ddd"}};
    std::vector<std::pair<std::string, std::string>> v2 = {{"cccc", "ddd"}, {"aaaa", "bbbb"}}; 
    auto p1 = sortListSum(v1);
    auto p2 = sortListSum(v2); 
    assert(issame(v1, v2)); 
    for (int i : p1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;  // Print the result
}
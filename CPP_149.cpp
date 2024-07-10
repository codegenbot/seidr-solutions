```
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        std::string a_str = a[i];
        std::string b_str = b[i];
        int num1 = std::stoi(a_str);
        int num2 = std::stoi(b_str);
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
        int num = std::stoi(pair.first + pair.second);
        if (!num) return {};
        result.push_back(num);
    }
    std::sort(result.begin(), result.end());
    return result;

}

int main() {
    { 
        std::vector<std::pair<std::string, std::string>> v1 = {{"aaaa", "bbbb"}, {"cccc", "ddd"}};
        std::vector<std::pair<std::string, std::string>> v2 = {{"cccc", "ddd"}, {"aaaa", "bbbb"}};
        if (!issame({v1[0][0], v1[0][1]}, {v2[0][0], v2[0][1]}) || !issame({v1[1][0], v1[1][1]}, {v2[1][0], v2[1][1]})) {
            std::cout << "Test failed" << std::endl;
        } else {
            std::cout << "Test passed" << std::endl;
        }
        
        std::vector<std::pair<std::string, std::string>> v3 = {{"aaaa", "bbbb"}, {"dd", "cc"}};
        std::vector<std::pair<std::string, std::string>> v4 = {{"cc", "dd"}, {"aaaa", "bbbb"}};
        if (!issame({v3[0][0], v3[0][1]}, {v4[0][0], v4[0][1]}) || !issame({v3[1][0], v3[1][1]}, {v4[1][0], v4[1][1]})) {
            std::cout << "Test failed" << std::endl;
        } else {
            std::cout << "Test passed" << std::endl;
        }
    }
}
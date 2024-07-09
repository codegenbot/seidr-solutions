```
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> vec2) {
    if (a.size() != vec2.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        std::vector<std::string> res;
        if (!issame(lst1, lst2)) return {};
        for (const auto& s : lst1) {
            res.push_back(s);
        }
        return res;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> a, b;
    for (int i = 0; i < n; i++) {
        std::string temp;
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, temp);
        if (i == 0) a.push_back(temp);
        else b.push_back(temp);
    }

    std::vector<std::string> result = total_match(a, b);

    std::cout << "The matching strings are: \n";
    for (const auto& s : result) {
        std::cout << s << "\n";
    }
    return 0;
}
```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (issame(lst1, lst2)) return true;
    else if (sum1 < sum2) return 1;
    else if (sum1 > sum2) return -1;
    else return 0;
}

int main() {
    vector<string> lst1 = {"apple", "banana", "orange"};
    vector<string> lst2 = {"hello", "world", "python"};
    
    cout << total_match(lst1, lst2) << endl;

    return 0;
}
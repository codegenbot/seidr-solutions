```cpp
#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (stoi(a[i]) != stoi(b[i])) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::vector<std::string>>& lst) {
    std::vector<int> sums;
    for (const auto& str : lst[0]) {
        int sum = 0;
        for (int i = 1; i < lst.size(); i++) {
            if (find(lst[i].begin(), lst[i].end(), str) != lst[i].end()) {
                sum += stoi(str);
                break;
            }
        }
        sums.push_back(sum); 
    } 

    std::vector<int> sorted_int_sums = sums; // initialize with ints
    std::vector<std::string> sorted_sums;
    for (int num : sorted_int_sums) {
        sorted_sums.push_back(std::to_string(num));
    }

    std::sort(sorted_sums.begin(), sorted_sums.end()); 

    return sorted_sums;
}

std::vector<std::vector<std::string>> readInput() {
    int n;
    std::cin >> n;

    std::vector<std::vector<std::string>> lst(n);
    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        for (int j = 0; j < m; j++) {
            std::string s;
            std::cin >> s;
            lst[i].push_back(s);
        }
    }

    return lst;
}

int main() {
    auto input = readInput();
    auto output = sorted_list_sum(input);
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0;
}
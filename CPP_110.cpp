```cpp
#include <vector>
#include <string>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2) {
    bool isPossible = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            int found = false;
            for (int otherNum : lst2) {
                if (otherNum == num) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return "NO";
            } else {
                isPossible = true;
            }
        }
    }
    return isPossible ? "YES" : "NO";
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> lst1(n), lst2(m);
    for (int i = 0; i < n; ++i) {
        std::cin >> lst1[i];
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> lst2[i];
    }
    std::cout << exchange(lst1, lst2) << '\n';
    return 0;
}
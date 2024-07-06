#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
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
    std::vector<int> lst1 = {100, 200};
    std::vector<int> lst2 = {200, 200};
    assert(exchange(lst1, lst2) == "YES");
    return 0;
}
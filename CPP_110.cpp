#include <string>
#include <vector>
#include <cassert>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            oddCount++;
        }
    }
    return (oddCount == 0) ? "YES" : "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    // additional test cases...
    return 0;
}
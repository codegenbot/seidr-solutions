#include <string>
#include <vector>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    for (int num : lst2) {
        if (num % 2 == 0 && oddCount > 0) {
            return "YES";
        } else if (num % 2 != 0) {
            oddCount--;
        }
    }
    if (oddCount == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    std::cout << exchange({1, 2, 3, 4, 5}, {6, 7, 8}) << std::endl;
    return 0;
}
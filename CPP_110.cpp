#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    if (oddCount > (lst2.size() - oddCount))
        return "NO";
    else
        return "YES";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    // Add more test cases here...
    return 0;
}
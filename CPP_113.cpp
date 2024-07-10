#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int countOddElements(const std::vector<std::string>& strings) {
    int count = 0;
    for (const std::string& str : strings) {
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    // Test the countOddElements function
    assert(countOddElements({"271", "137", "314"}) == 3);
    
    return 0;
}
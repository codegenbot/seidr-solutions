```cpp
#include <vector>
#include <string>
#include <cassert>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(std::issame(std::vector<int>(std::even_odd_palindrome(1)), std::vector<int>()));
    std::vector<int> std::even_odd_palindrome(int n) {
        std::vector<int> result;
        int temp = n;
        while(temp != 0) {
            int lastDigit = temp % 10;
            if(lastDigit % 2 == 0)
                result.push_back(lastDigit);
            else
                result.push_back(-lastDigit);
            temp /= 10;
        }
        return result;
    }
}
#include <vector>
#include <string>

bool issame(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return true;
    else if (sum1 > sum2) return false;
    else return true;  // or you can return false here
}

int main() {
    // your code goes here
}
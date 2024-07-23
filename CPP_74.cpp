#include <vector>
#include <string>

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    std::vector<std::string> result;
    int sum1 = 0, sum2 = 0;

    for (const std::string& s : lst1) {
        sum1 += s.length();
    }
    for (const std::string& s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        return lst1;
    }
}

int main() {
    // Code to read input from user and return output
    return 0;
}
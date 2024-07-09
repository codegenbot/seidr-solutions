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
    else return true;
}

int main() {
    std::vector<std::string> vec1;  // Initialize vectors here
    std::vector<std::string> vec2;  // Initialize vectors here
    bool result = issame(vec1, vec2);  // Call the function with the vectors
    return 0;
}
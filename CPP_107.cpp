// Correct the function name to is_same
bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Change vector to std::vector and separate the arguments with a comma
std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> count(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                count[0]++;
            } else {
                count[1]++;
            }
        }
    }
    return count;
}

// Correct the function name to is_same and separate the arguments with commas
bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Correct the function name to is_same
bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Change assert to include the <cassert> header
#include <cassert>
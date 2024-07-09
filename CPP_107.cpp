```cpp
#include <vector>
#include <string>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2);
    int count_even = 0;
    int count_odd = 0;

    for (int i = 1; i <= n; ++i) {
        std::string str = std::to_string(i);
        bool is_palindrome = true;

        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - 1 - j]) {
                is_palindrome = false;
                break;
            }
        }

        if (!is_palindrome) continue;

        int num = i;
        bool is_even = num % 2 == 0;

        if (is_palindrome && is_even) ++count_even;
        else if (is_palindrome && !is_even) ++count_odd;
    }

    result[0] = count_even;
    result[1] = count_odd;

    return result;
}
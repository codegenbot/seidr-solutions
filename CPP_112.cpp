```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    
    // Delete all characters in s that are equal to any character in c
    for (char& ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(std::string(1, ch));
    }

    // Check if the result string is palindrome
    std::string res_str = "";
    for (std::string str : result)
        res_str += str;
    bool is_palindrome = false;
    int start = 0, end = res_str.length() - 1;
    while (start < end) {
        if (res_str[start] != res_str[end])
            break;
        start++;
        end--;
    }
    if (start >= end)
        is_palindrome = true;

    // Return the result
    std::vector<std::string> final_result;
    final_result.push_back(res_str);
    final_result.push_back(is_palindrome ? "True" : "False");
    return final_result;
}
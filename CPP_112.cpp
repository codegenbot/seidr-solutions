#include <vector>
#include <string>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    bool is_palindrome = true;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    result.push_back(temp);
    result.push_back(std::to_string(is_palindrome));
    return result;
}

int main() {
    assert(reverse_delete("mamma", "mia") == std::vector<std::string> { "", "True" });
}
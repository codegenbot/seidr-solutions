#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "a"), {"True"}));
    // ... rest of your code
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    vector<string> result;

    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }

    std::string resStr = "";
    for (string str : result) {
        resStr += str;
    }

    bool isPalindrome = false;
    int left = 0, right = resStr.length() - 1;
    while (left < right) {
        if (resStr[left] != resStr[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }

    return result;
}
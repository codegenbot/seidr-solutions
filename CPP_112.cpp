#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != "True") return false;
    }
    return true;
}

std::vector<string> reverse_delete(string s, string c) {
    vector<char> temp(s.begin(), s.end());
    for (char& c1 : temp) {
        for (char c2 : c) {
            if (c1 == c2) {
                c1 = '\0';  // delete character
                break;
            }
        }
    }
    string result;
    for (char c1 : temp) {
        if (c1 != '\0') {
            result += c1;
        }
    }
    bool isPalindrome = true;
    int left = 0, right = result.length() - 1;
    while (left < right) {
        if (result[left] != result[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    vector<string> res(2);
    res[0] = result;
    res[1] = (isPalindrome ? "True" : "False");
    return res;
}
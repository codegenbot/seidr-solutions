```cpp
#include <vector>
#include <set>
#include <string>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    
    // Create a set of characters in string c for O(1) lookup
    std::set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    std::string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If the character is not in the set of characters in c, add it to temp
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool is_palindrome = true;
    int left = 0, right = temp.length() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    // Add the result string and palindrome check to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == 1 && a[0] == b[0];
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}
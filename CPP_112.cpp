```cpp
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;

    // Create a set of characters in string c for efficient lookup
    std::set<char> c_set(c.begin(), c.end());

    // Initialize an empty string to store the result
    std::string temp = "";

    // Iterate over each character in string s
    for (char ch : s) {
        // Check if the character is not in set c_set
        if (c_set.find(ch) == c_set.end()) {
            // If the character is not in set c_set, add it to temp
            temp += ch;
        }
    }

    // Check if the result string temp is palindrome
    bool is_palindrome = false;
    if (temp.length() > 0) {
        std::string rev_temp = temp;
        std::reverse(rev_temp.begin(), rev_temp.end());
        is_palindrome = temp == rev_temp;
    }

    // Add the result string and a boolean indicating whether it's palindrome to the vector
    result.push_back(temp);
    if (is_palindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }

    return result;
}

int main() {
    assert(issame({"" , "True"}, reverse_delete("mamma", "mia")));
    return 0;
}
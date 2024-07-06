#include <vector>
#include <set>
#include <string>

// Function to compare two vectors
bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

// Reverse and palindrome check function
vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for faster lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in s
    for (char ch : s) {
        // If the character is not in c, add it to the temporary string
        if (!c_set.count(ch)) {
            temp += ch;
        }
    }
    
    // Check if the temporary string is a palindrome
    bool is_palindrome = false;
    string rev_temp = temp;
    reverse(rev_temp.begin(), rev_rev_temp.end());
    is_palindrome = (temp == rev_temp);
    
    // Add the result and palindrome check to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}
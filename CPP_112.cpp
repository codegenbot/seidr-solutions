#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {result, (isPalindrome ? "True" : "False")};
}

int main() {
    vector<string> result1 = reverse_delete("mamma", "mia");
    cout << result1[0] << " " << result1[1] << endl;
    // Expected Output: "" True

    vector<string> result2 = reverse_delete("racecar", "r");
    cout << result2[0] << " " << result2[1] << endl;
    // Expected Output: aceca True

    vector<string> result3 = reverse_delete("hello", "e");
    cout << result3[0] << " " << result3[1] << endl;
    // Expected Output: hllo False

    return 0;
}
#include <vector>
#include <string>

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) {
        return false;
    }
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;
        int start = 0, end = str.length() - 1;
        while (start < end) {
            if (str[start] != str[end]) {
                isPalindrome = false;
                break;
            }
            start++;
            end--;
        }
        if (isPalindrome && i % 2 == 0) {
            result[0]++;
        } else if (isPalindrome && i % 2 != 0) {
            result[1]++;
        }
    }
    return result;
}
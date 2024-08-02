#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<char> v;
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            v.push_back(x);
    }

    string result = "";
    for (char x : v)
        result += x;

    bool is_palindrome = false;
    int start = 0, end = result.length() - 1;
    while (start < end) {
        if (result[start] != result[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    if (is_palindrome)
        return {result, "True"};
    else
        return {result, "False"};
}
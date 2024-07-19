#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool flag = false;
        for (char cc : c) {
            if (ch == cc) {
                flag = true;
                break;
            }
        }
        if (!flag)
            temp += ch;
    }
    if (temp.length() > 0) {
        string reverseTemp = temp;
        reverse(temp.begin(), temp.end());
        result.push_back(temp);
        if (isPalindrome(reverseTemp)) {
            result.push_back("True");
        } else {
            result.push_back("False");
        }
    } else
        result.push_back("False");
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert (issame(reverse_delete("mamma", "mia") , vector<string> {"", "True"}));
    return 0;
}
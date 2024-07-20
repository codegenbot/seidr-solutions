#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> setC(c.begin(), c.end()); 
    string res = "";
    
    for (char c : s) {
        if (setC.count(c) == 0) {
            res += c;
        }
    }
    
    bool isPalindrome = true;
    int left = 0, right = res.length() - 1;
    while (left < right) {
        if (res[left] != res[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    vector<string> finalResult;
    finalResult.push_back(res);
    if (isPalindrome) {
        finalResult.push_back("True");
    } else {
        finalResult.push_back("False");
    }
    
    return finalResult;
}

int main() {
    string s = "abcdedcba";
    string c = "ab";
    vector<string> result = reverse_delete(s, c);
    cout << "Result: " << result[0] << ", Is Palindrome: " << result[1] << endl;
    
    return 0;
}
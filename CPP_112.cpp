#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(1 + string(1, ch));
    }
    string strResult = "";
    for (int i = 0; i < result.size(); i++) {
        strResult += result[i];
    }
    
    bool isPalindrome = true;
    int left = 0, right = strResult.length() - 1;
    while (left < right) {
        if (strResult[left] != strResult[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    result.push_back(isPalindrome ? "True" : "False");
    return result;
}
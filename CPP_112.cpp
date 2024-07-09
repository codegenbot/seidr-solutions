#include <string>
#include <algorithm>
#include <vector>

vector<string> reverse_delete(string s, string c) {
    vector<char> charArr(s.begin(), s.end());
    
    for (char &ch : charArr) {
        bool found = false;
        for (char cc : c) {
            if (cc == ch) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            continue;
        }
        
        size_t pos = 0;
        while ((pos = charArr.begin() + find(charArr.begin(), charArr.end(), ch) - charArr.begin()) != charArr.end()) {
            charArr.erase(charArr.begin() + pos);
        }
    }
    
    string resultStr((char*)charArr.data());
    bool isPalindrome = true;
    size_t start = 0, end = resultStr.length();
    while (start < end) {
        if (resultStr[start] != resultStr[end - 1]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    vector<string> result;
    result.push_back(resultStr);
    result.push_back(isPalindrome ? "True" : "False");
    return result;
}
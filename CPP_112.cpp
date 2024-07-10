#include <vector>
#include <string>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            result.push_back(std::to_string(ch));
        }
    }
    
    std::string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    
    bool is_palindrome = true;
    int left = 0, right = temp.size() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    result.push_back(std::to_string(is_palindrome).substr(0,4));
    return result;
}
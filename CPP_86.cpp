#include <cassert>
#include <string>
#include <algorithm>

std::string anti_shuffle(const std::string& s) {
    std::string result = s;
    std::string oddChars, evenChars;
    
    for (size_t i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            evenChars += s[i];
        } else {
            oddChars += s[i];
        }
    }
    
    std::reverse(oddChars.begin(), oddChars.end());
    std::reverse(evenChars.begin(), evenChars.end());

    for (size_t i = 0, j = 0, k = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            result[i] = evenChars[j++];
        } else {
            result[i] = oddChars[k++];
        }
    }

    return result;
}
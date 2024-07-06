```cpp
#include <string>
#include <vector>
#include <algorithm>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const std::string& s) { 
        return std::find(b.begin(), b.end(), s) != b.end(); 
    });
}

std::vector<std::string> selectWords(const std::string& s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool hasNConsonants = false;
            int consonantCount = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isvowel(tolower(ch))) {
                    consonantCount++;
                    if (consonantCount == n) {
                        hasNConsonants = true;
                        break;
                    }
                }
            }
            if (hasNConsonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int textLength = text.length();
    int targetLength = target.length();

    for(int i = 0; i <= textLength - targetLength; i++) {
        bool isMatch = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if(isMatch) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
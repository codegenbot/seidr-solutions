#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            // search for overlapping matches
            int k = i + 1;
            while (k <= text.size() - target.size()) {
                found = true;
                for (int j = 0; j < target.size(); j++) {
                    if (text[k + j] != target[j]) {
                        found = false;
                        break;
                    }
                }
                if (!found) {
                    break;
                }
                result.push_back(k);
                k++;
            }
        }
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
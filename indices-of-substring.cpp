#include <vector>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    if (m > 0) {
        for (int i = 0; i + m - 1 < n; i++) { 
            int j = 0;
            while (j < m && i + j < n && text[i+j] == target[j]) {
                j++;
                if (j == m) {
                    result.push_back(i);
                    i = i + 1; // Increment i instead of adjusting it
                    j = 0;
                }
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    getline(std::cin, input);

    size_t targetStart = 0;
    size_t targetEnd = input.find('\n');
    if (targetEnd == std::string::npos) {
        targetEnd = input.length();
    }

    std::string text = input.substr(targetEnd);
    std::string target = input.substr(0, targetEnd);

    std::vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
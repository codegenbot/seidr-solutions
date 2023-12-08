#include <string>
#include <vector>

int findIndices(std::string text, std::string target) {
    int count = 0;
    std::vector<int> indices;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == target[count]) {
            count++;
            if (count == target.length()) {
                indices.push_back(i - count + 1);
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    return indices;
}
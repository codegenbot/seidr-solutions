```c++
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    std::string text = "your_text_here"; 
    std::string target = "your_target_here"; 
    std::vector<int> result = indicesOfSubstring(text, target);
    // print or use the result as needed
    return 0;
}
```
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        bool match = true;
        for(int j = 0; j < m; j++) {
            if(text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if(match) {
            result.push_back(i);
        }
    }

    return result;

}

int main() {
    std::string text = "hello world";
    std::string target = "world";
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << std::endl;
    }
    return 0;
}
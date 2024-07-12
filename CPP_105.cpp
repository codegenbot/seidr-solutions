#include <vector>
#include <string>

bool issame(vector<string> a, int len) {
    if(a.size() != len)
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i].length() > len)
            return false;
    return true;
}

int by_length_helper(std::vector<std::pair<string, int>> result) {
    std::sort(result.begin(), result.end(), [](const auto& a, const auto& b){return a.first.length() < b.first.length();});
    int max_length = 0;
    for(const auto& pair : result)
        max_length = std::max(max_length, pair.first.length());
    return max_length;
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry"};
    int answer = by_length_helper({{word, word.length()} for word in words});
    // Don't forget to print out the answer!
    return 0;
}
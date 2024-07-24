#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int start = 0, end = 0;
    
    while (end < text.size()) {
        if (text.substr(start, target.size()).compare(target) == 0) {
            result.push_back(start);
            start += 1;
        } else if (start < text.size() - target.size() + 1) {
            start++;
        } else {
            end++;
            start = end;
        }
    }
    
    return result;
}

int main() {
    std::string text, target;
    cin >> text >> target;
    for (int i: indicesOfSubstring(text, target)) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
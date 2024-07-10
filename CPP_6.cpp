#include <vector>
#include <string>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> parse_nested_parens(const std::string& s) {
    int depth = 0, last_opened = -1, count = 0;
    std::vector<int> result;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            depth++;
        else if (s[i] == ')')
            depth--;
        
        if (depth > last_opened) {
            result.push_back(count);
            last_opened = i;
            count = 0;
        } else
            count++;
    }
    
    return result;
}

int main() {
    assert(same(parse_nested_parens("(()(())((()))"), {4, 3, 2, 1, 0, -1, -2, -3, -4}));
    return 0;
}
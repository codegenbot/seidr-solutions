#include <vector>

bool issame(const std::vector<int>& arr) {
    if (arr.empty()) {
        return true;
    }

    int first = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] != first) {
            return false;
        }
    }

    return true;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    // Code contest problem solution
}
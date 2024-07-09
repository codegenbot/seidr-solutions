#include <vector>
#include <map>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back((i == 1 ? "One" : (i == 2 ? "Two" : (i == 3 ? "Three" : 
                (i == 4 ? "Four" : (i == 5 ? "Five" : (i == 6 ? "Six" : (i == 7 ? "Seven" : 
                    (i == 8 ? "Eight" : "Nine")))))))));
    }
    std::sort(result.begin(), result.end());
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> input = {9, 4, 8};
    std::vector<std::string> output = by_length(input);
    assert(issame(output, {"Nine", "Eight", "Four"}));
    return 0;
}
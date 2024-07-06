```cpp
#include <vector>
#include <string>
#include <cctype>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (c - '0' % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) +
                          " in the string " + std::to_string(i+1) + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}) , {"the number of odd elements 2 in the string 1 of the input.",
                                                         "the number of odd elements 1 in the string 2 of the input.",
                                                         "the number of odd elements 1 in the string 3 of the input."}));
    return 0;
}
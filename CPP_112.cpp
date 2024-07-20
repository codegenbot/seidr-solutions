#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> combined = a;
    combined.insert(combined.end(), b.begin(), b.end());

    std::string result = "";
    for (const std::string& str : combined) {
        for (char ch : str) {
            if (result.find(ch) == std::string::npos) {
                result += ch;
            }
        }
    }

    std::string reversedResult;
    std::reverse_copy(result.begin(), result.end(), std::back_inserter(reversedResult));

    return reversedResult == "euarT";
}

int main() {
    assert(issame({"mamma"}, {"mia"})); // Sample input vectors
    return 0;
}
```cpp
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(int scores[]) {
    std::vector<std::string> result;
    for (int score : scores) {
        if (score >= 90)
            result.push_back("A");
        else if (score >= 80)
            result.push_back("B");
        else if (score >= 70)
            result.push_back("C");
        else if (score >= 60)
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int input[] = {0, 70};
    assert(issame(numerical_letter_grade(input), {"E", "D"}));
}
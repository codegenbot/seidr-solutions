#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::pair<int, double> pair) {
    int score = pair.first;
    double percentage = pair.second;

    std::vector<std::string> result;

    if (score >= 90)
        result.push_back("A");
    else if (score >= 80)
        result.push_back("B");
    else if (score >= 70)
        result.push_back("C");
    else if (score >= 60)
        result.push_back("D");
    else
        result.push_back("F");

    if (percentage < 60) {
        if (result.back() == "A" || result.back() == "B")
            result.push_back("-");
        else if (result.back() != "F")
            result.push_back("+");
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}
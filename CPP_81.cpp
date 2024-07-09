```cpp
#include <iostream>
#include <vector>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float g : grades) {
        if (g >= 4.0) {
            result.push_back("A+");
        } else if (g > 3.7) {
            result.push_back("A");
        } else if (g > 3.3) {
            result.push_back("A-");
        } else if (g > 3.0) {
            result.push_back("B+");
        } else if (g > 2.7) {
            result.push_back("B");
        } else if (g > 2.3) {
            result.push_back("B-");
        } else if (g > 2.0) {
            result.push_back("C+");
        } else if (g > 1.7) {
            result.push_back("C");
        } else if (g > 1.3) {
            result.push_back("C-");
        } else if (g > 1.0) {
            result.push_back("D+");
        } else if (g > 0.7) {
            result.push_back("D");
        } else {
            result.push_back("E");
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0.0, 0.7}), {"E", "D-" }));
    return 0;
}
```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    if(a.empty()) return true;
    for(int i = 1; i < a.size(); i++) {
        if(a[i] != a[0]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> result;
    for (const auto& grade : grades) {
        if (grade >= 4.0)
            result.push_back("A+");
        else if (grade > 3.7)
            result.push_back("A");
        else if (grade > 3.3)
            result.push_back("A-");
        else if (grade > 3.0)
            result.push_back("B+");
        else if (grade > 2.7)
            result.push_back("B");
        else if (grade > 2.3)
            result.push_back("B-");
        else if (grade > 2.0)
            result.push_back("C+");
        else if (grade > 1.7)
            result.push_back("C");
        else if (grade > 1.3)
            result.push_back("C-");
        else if (grade > 1.0)
            result.push_back("D+");
        else if (grade > 0.7)
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}

int main() {
    std::vector<float> grades = {0.0, 0.7};
    std::vector<std::string> result = numerical_letter_grade(grades);
    assert(issame({result[0]}));
    return 0;
}
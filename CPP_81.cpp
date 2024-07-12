```
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 0.9)
            result.push_back("A");
        else if (grade >= 0.8)
            result.push_back("B");
        else if (grade >= 0.7)
            result.push_back("C+");
        else if (grade >= 0.6)
            result.push_back("C");
        else if (grade >= 0.5)
            result.push_back("D+");
        else if (grade >= 0.4)
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}

int main() {
    float grade1, grade2;
    std::cout << "Enter the first grade: ";
    std::cin >> grade1;
    std::cout << "Enter the second grade: ";
    std::cin >> grade2;
    std::vector<float> grades = {grade1, grade2};
    std::vector<std::string> result = numerical_letter_grade({grade1, grade2});
    assert(same({{"E"}, {"C+"}}));
}
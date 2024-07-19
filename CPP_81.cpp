```
#include <vector>
#include <string>
#include <initializer_list>

bool same(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (i >= vec2.size() || vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float>& grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 4.0) {
            result.push_back("A+");
        } else if (grade >= 3.7) {
            result.push_back("A");
        } else if (grade >= 3.3) {
            result.push_back("A-");
        } else if (grade >= 3.0) {
            result.push_back("B+");
        } else if (grade >= 2.7) {
            result.push_back("B");
        } else if (grade >= 2.3) {
            result.push_back("B-");
        } else if (grade >= 2.0) {
            result.push_back("C+");
        } else if (grade >= 1.7) {
            result.push_back("C");
        } else if (grade >= 1.3) {
            result.push_back("C-");
        } else if (grade >= 1.0) {
            result.push_back("D+");
        } else if (grade >= 0.7) {
            result.push_back("D");
        } else {
            result.push_back("F");
        }
    }
    return result;
}

int main() {
    std::vector<float> grades = {3.8f, 2.9f, 4.1f, 3.5f};
    std::vector<std::string> letterGrades = numerical_letter_grade(grades);

    for (const auto& grade : letterGrades) {
        std::cout << grade << " ";
    }
    return 0;
}
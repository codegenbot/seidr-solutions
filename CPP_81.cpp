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

std::vector<std::string> numerical_letter_grade(float* grades, size_t n) {
    std::vector<std::string> result;
    for (size_t i = 0; i < n; i++) {
        if (grades[i] >= 4.0) {
            result.push_back("A+");
        } else if (grades[i] >= 3.7) {
            result.push_back("A");
        } else if (grades[i] >= 3.3) {
            result.push_back("A-");
        } else if (grades[i] >= 3.0) {
            result.push_back("B+");
        } else if (grades[i] >= 2.7) {
            result.push_back("B");
        } else if (grades[i] >= 2.3) {
            result.push_back("B-");
        } else if (grades[i] >= 2.0) {
            result.push_back("C+");
        } else if (grades[i] >= 1.7) {
            result.push_back("C");
        } else if (grades[i] >= 1.3) {
            result.push_back("C-");
        } else if (grades[i] >= 1.0) {
            result.push_back("D+");
        } else if (grades[i] >= 0.7) {
            result.push_back("D");
        } else {
            result.push_back("F");
        }
    }
    return result;
}

int main() {
    float grades[] = {3.8, 2.9, 4.1, 3.5};
    size_t n = sizeof(grades) / sizeof(grades[0]);
    std::vector<std::string> letterGrades = numerical_letter_grade(grades, n);

    for (const auto& grade : letterGrades) {
        std::cout << grade << " ";
    }
    return 0;
}
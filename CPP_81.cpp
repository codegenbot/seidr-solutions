```cpp
#include <iostream>
#include <vector>

bool same(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        result.push_back((grade >= 4.0) ? "A+" : (grade > 3.7) ? "A" : (grade > 3.3) ? "A-" : (grade > 3.0) ? "B+" : (grade > 2.7) ? "B" : (grade > 2.3) ? "B-" : (grade > 2.0) ? "C+" : (grade > 1.7) ? "C" : (grade > 1.3) ? "C-" : (grade > 1.0) ? "D+" : (grade > 0.7) ? "D" : "F");
    }
    return result;
}

int main() {
    std::vector<float> grades = {3.8, 2.9, 4.1, 3.5};
    std::vector<std::string> letterGrades = numerical_letter_grade(grades);

    for (const auto& grade : letterGrades) {
        std::cout << grade << " ";
    }
    return 0;
}
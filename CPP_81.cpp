```cpp
# pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#include <vector>
#include <string>

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size())
        return false;

    for(int i = 0; i < (int)a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }

    return true;
}

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letterGrades;
    for (const auto& grade : grades) {
        if (grade >= 4.0f)
            letterGrades.push_back("A");
        else if (grade >= 3.5f)
            letterGrades.push_back("B");
        else if (grade >= 3.0f)
            letterGrades.push_back("C");
        else if (grade >= 2.5f)
            letterGrades.push_back("D");
        else
            letterGrades.push_back("F");
    }
    return letterGrades;
}

int main() {
    std::vector<float> grades;
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        float grade;
        std::cout << "Enter student " << i+1 << "'s grade: ";
        std::cin >> grade;
        grades.push_back(grade);
    }

    std::vector<std::string> letterGrades = numerical_letter_grade(grades);

    for (const auto& grade : letterGrades) {
        std::cout << grade << " ";
    }
    return 0;

}
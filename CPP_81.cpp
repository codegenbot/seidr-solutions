#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numericalLetterGrade(vector<float> grades) {
    vector<string> letterGrades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letterGrades.push_back("A+");
        else if (grade > 3.7)
            letterGrades.push_back("A");
        else if (grade > 3.3)
            letterGrades.push_back("A-");
        else if (grade > 3.0)
            letterGrades.push_back("B+");
        else if (grade > 2.7)
            letterGrades.push_back("B");
        else if (grade > 2.3)
            letterGrades.push_back("B-");
        else if (grade > 2.0)
            letterGrades.push_back("C+");
        else if (grade > 1.7)
            letterGrades.push_back("C");
        else if (grade > 1.3)
            letterGrades.push_back("C-");
        else if (grade > 1.0)
            letterGrades.push_back("D+");
        else if (grade > 0.7)
            letterGrades.push_back("D");
        else
            letterGrades.push_back("F");
    }
    return letterGrades;
}

int main() {
    vector<float> grades = {0.0, 0.7};
    vector<string> expected = {"F", "D"};
    if (!isSame(numericalLetterGrade(grades), expected)) {
        std::cerr << "Test failed." << std::endl;
        return 1;
    }
    std::cout << "Test passed." << std::endl;
    return 0;
}
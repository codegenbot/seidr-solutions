#include <string>
#include <vector>

double numerical_letter_grade(vector<int> scores) {
    vector<string> grades;
    for (int score : scores) {
        if (score >= 90)
            grades.push_back("A");
        else if (score >= 80)
            grades.push_back("B");
        else if (score >= 70)
            grades.push_back("C");
        else if (score >= 60)
            grades.push_back("D");
        else
            grades.push_back("F");
    }
    return issame(grades, {"E", "D-"});
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"})); 
}
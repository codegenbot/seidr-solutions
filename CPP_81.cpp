#include <string>
#include <vector>

double numerical_letter_grade(std::vector<int> grades) {
    int total = 0;
    for (int grade : grades) {
        total += grade;
    }
    double average = static_cast<double>(total) / grades.size();
    
    if (average >= 4.0) return 4.0; 
    else if (average >= 3.7) return 3.7;
    else if (average >= 3.3) return 3.3;
    else if (average >= 3.0) return 3.0;
    else if (average >= 2.7) return 2.7;
    else if (average >= 2.3) return 2.3;
    else return 2.0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(std::vector<std::string>(numerical_letter_grade({0, 0.7})), {"E", "D-"})); 
}
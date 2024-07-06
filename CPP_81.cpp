```
bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    bool are_same = true;
    
    for (float grade : grades) {
        if (grade >= 4.0) {
            letter_grades.push_back("A+");
        } else if (grade > 3.7) {
            letter_grades.push_back("A");
        } else if (grade > 3.3) {
            letter_grades.push_back("A-");
        } else if (grade > 3.0) {
            letter_grades.push_back("B+");
        } else if (grade > 2.7) {
            letter_grades.push_back("B");
        } else if (grade > 2.3) {
            letter_grades.push_back("B-");
        } else if (grade > 2.0) {
            letter_grades.push_back("C+");
        } else if (grade > 1.7) {
            letter_grades.push_back("C");
        } else if (grade > 1.3) {
            letter_grades.push_back("C-");
        } else if (grade > 1.0) {
            letter_grades.push_back("D+");
        } else if (grade > 0.7) {
            letter_grades.push_back("D");
        } else if (grade > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("F");
        }
    }
    
    // Add this line before returning
    std::vector<std::string> result = letter_grades;
    for (int i = 1; i < letter_grades.size(); i++) {
        if (!issame(std::vector<std::string>(letter_grades.begin(), letter_grades.begin()+i), 
            std::vector<std::string>(result.begin(), result.begin()+i))) {
            are_same = false;
        }
    }
    
    return are_same ? letter_grades : std::vector<std::string>();
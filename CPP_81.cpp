#include <vector>
#include <string>

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 4.0) {
            letter_grades.push_back("A+");
        } else if (grades[i] > 3.7) {
            letter_grades.push_back("A");
        } else if (grades[i] > 3.3) {
            letter_grades.push_back("A-");
        } else if (grades[i] > 3.0) {
            letter_grades.push_back("B+");
        } else if (grades[i] > 2.7) {
            letter_grades.push_back("B");
        } else if (grades[i] > 2.3) {
            letter_grades.push_back("B-");
        } else if (grades[i] > 2.0) {
            letter_grades.push_back("C+");
        } else if (grades[i] > 1.7) {
            letter_grades.push_back("C");
        } else if (grades[i] > 1.3) {
            letter_grades.push_back("C-");
        } else if (grades[i] > 1.0) {
            letter_grades.push_back("D+");
        } else if (grades[i] > 0.7) {
            letter_grades.push_back("D");
        } else if (grades[i] > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    vector<float> grades1 = {3.8, 2.5, 4.2, 3.1};
    vector<string> expected1 = {"A", "C+", "A+", "B"};
    vector<string> result1 = numerical_letter_grade(grades1);
    if (issame(expected1, result1)) {
        cout << "Test case 1 passed" << endl;
    } else {
        cout << "Test case 1 failed" << endl;
    }
    
    vector<float> grades2 = {2.9, 1.1, 3.5};
    vector<string> expected2 = {"B-", "D-", "B+"};
    vector<string> result2 = numerical_letter_grade(grades2);
    if (issame(expected2, result2)) {
        cout << "Test case 2 passed" << endl;
    } else {
        cout << "Test case 2 failed" << endl;
    }
    
    return 0;
}
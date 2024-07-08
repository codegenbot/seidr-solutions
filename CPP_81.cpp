#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
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

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        string letter_grade;
        if (grade >= 4.0) {
            letter_grade = "A+";
        } else if (grade > 3.7) {
            letter_grade = "A";
        } else if (grade > 3.3) {
            letter_grade = "A-";
        } else if (grade > 3.0) {
            letter_grade = "B+";
        } else if (grade > 2.7) {
            letter_grade = "B";
        } else if (grade > 2.3) {
            letter_grade = "B-";
        } else if (grade > 2.0) {
            letter_grade = "C+";
        } else if (grade > 1.7) {
            letter_grade = "C";
        } else if (grade > 1.3) {
            letter_grade = "C-";
        } else if (grade > 1.0) {
            letter_grade = "D+";
        } else if (grade > 0.7) {
            letter_grade = "D";
        } else {
            letter_grade = "F";
        }
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    vector<float> grades; 
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        float g;
        cout << "Enter grade of student " << i+1 << ": ";
        cin >> g;
        grades.push_back(g);
    }

    vector<string> letter_grade_result = numerical_letter_grade(grades);

    if(same(vector<string>(numerical_letter_grade(grades)), letter_grade_result)) {
        for (int i = 0; i < n; i++) {
            cout << "Student " << i+1 << "'s grade is: " << letter_grade_result[i] << endl;
        }
    } else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
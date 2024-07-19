#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    set<string> uniqueGrades;
    
    for (float grade : grades) {
        string letterGrade;
        if (grade >= 4.0)
            letterGrade = "A+";
        else if (grade > 3.7)
            letterGrade = "A";
        else if (grade > 3.3)
            letterGrade = "A-";
        else if (grade > 3.0)
            letterGrade = "B+";
        else if (grade > 2.7)
            letterGrade = "B";
        else if (grade > 2.3)
            letterGrade = "B-";
        else if (grade > 2.0)
            letterGrade = "C+";
        else if (grade > 1.7)
            letterGrade = "C";
        else if (grade > 1.3)
            letterGrade = "C-";
        else if (grade > 1.0)
            letterGrade = "D+";
        else if (grade > 0.7)
            letterGrade = "D";
        else
            letterGrade = "F";
        
        uniqueGrades.insert(letterGrade);
    }
    
    for (string grade : uniqueGrades) {
        int count = 0;
        for (float f : grades) {
            if (grade == getLetterGrade(f)) {
                count++;
            }
        }
        cout << grade << ": " << count << endl;
    }

    return letter_grades;
}

string getLetterGrade(float grade) {
    string letterGrade;
    if (grade >= 4.0)
        letterGrade = "A+";
    else if (grade > 3.7)
        letterGrade = "A";
    else if (grade > 3.3)
        letterGrade = "A-";
    else if (grade > 3.0)
        letterGrade = "B+";
    else if (grade > 2.7)
        letterGrade = "B";
    else if (grade > 2.3)
        letterGrade = "B-";
    else if (grade > 2.0)
        letterGrade = "C+";
    else if (grade > 1.7)
        letterGrade = "C";
    else if (grade > 1.3)
        letterGrade = "C-";
    else if (grade > 1.0)
        letterGrade = "D+";
    else if (grade > 0.7)
        letterGrade = "D";
    else
        letterGrade = "F";
    return letterGrade;
}

int main() {
    vector<float> grades = {3.8, 2.9, 4.1};
    vector<string> result = numerical_letter_grade(grades);
    
    for (string grade : result) {
        cout << grade << endl;
    }
    
    return 0;
}
#include <vector>
#include <string>

bool areSame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(float g:grades){
        if(g>=4.0)letter_grades.push_back("A+");
        else if(g>3.7)letter_grades.push_back("A");
        else if(g>3.3)letter_grades.push_back("A-");
        else if(g>3.0)letter_grades.push_back("B+");
        else if(g>2.7)letter_grades.push_back("B");
        else if(g>2.3)letter_grades.push_back("B-");
        else if(g>2.0)letter_grades.push_back("C+");
        else if(g>1.7)letter_grades.push_back("C");
        else if(g>1.3)letter_grades.push_back("C-");
        else if(g>1.0)letter_grades.push_back("D+");
        else if(g>0.7)letter_grades.push_back("D");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

int main() {
    vector<float> grades = {0, 0.7};
    assert(areSame(numerical_letter_grade(grades), {"E", "D-"}) );
    
    // Read input from user
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    grades.resize(n);
    
    for(int i = 0; i < n; i++) {
        cout << "Enter grade for student " << (i+1) << ": ";
        cin >> grades[i];
    }
    
    // Convert grades to letter grades
    vector<string> letterGrades = numerical_letter_grade(grades);
    
    // Print the results
    cout << "Letter Grades: ";
    for(string s:letterGrades) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}
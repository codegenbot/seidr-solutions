```cpp
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letter_grades.push_back("A+");
        else if (grade > 3.7)
            letter_grades.push_back("A");
        else if (grade > 3.3)
            letter_grades.push_back("A-");
        else if (grade > 3.0)
            letter_grades.push_back("B+");
        else if (grade > 2.7)
            letter_grades.push_back("B");
        else if (grade > 2.3)
            letter_grades.push_back("B-");
        else if (grade > 2.0)
            letter_grades.push_back("C+");
        else if (grade > 1.7)
            letter_grades.push_back("C");
        else if (grade > 1.3)
            letter_grades.push_back("C-");
        else if (grade > 1.0)
            letter_grades.push_back("D+");
        else if (grade > 0.7)
            letter_grades.push_back("D");
        else
            letter_grades.push_back("F");
    }
    return letter_grades;
}

int main() {
    vector<float> grades;
    float grade;
    
    cout << "Enter the number of grades: ";
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cout << "Enter Grade " << (i+1) << ": ";
        cin >> grade;
        grades.push_back(grade);
    }
    
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        cout << grade << endl;
    }
    return 0;
}
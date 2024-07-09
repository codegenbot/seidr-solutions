```cpp
#include <vector>
#include <string>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
    for (float g : grades) {
        string letterGrade;
        if (g >= 4.0)
            letterGrade = "A+";
        else if (g > 3.7)
            letterGrade = "A";
        else if (g > 3.3)
            letterGrade = "A-";
        else if (g > 3.0)
            letterGrade = "B+";
        else if (g > 2.7)
            letterGrade = "B";
        else if (g > 2.3)
            letterGrade = "B-";
        else if (g > 2.0)
            letterGrade = "C+";
        else if (g > 1.7)
            letterGrade = "C";
        else if (g > 1.3)
            letterGrade = "C-";
        else if (g > 1.0)
            letterGrade = "D+";
        else if (g > 0.7)
            letterGrade = "D";
        else
            letterGrade = "E";

        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    vector<float> grades = {4.2, 3.8, 2.9};
    vector<string> letterGrades = numerical_letter_grade(grades);
    
    for (const auto &grade : letterGrades) {
        cout << grade << endl;
    }
}
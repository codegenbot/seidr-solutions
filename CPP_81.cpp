```cpp
#include <vector>
#include <string>

double numerical_letter_grade(int score) {
    double grade = 0;

    if (score >= 90)
        grade = 4.00;
    else if (score >= 80)
        grade = 3.50;
    else if (score >= 70)
        grade = 3.00;
    else if (score >= 60)
        grade = 2.50;
    else
        grade = 0.00;

    return grade;
}

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
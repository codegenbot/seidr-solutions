```cpp
#include <vector>
#include <string>

int numerical_letter_grade(int score) {
    string letter_grade;

    if (score >= 90)
        letter_grade = "A";
    else if (score >= 80)
        letter_grade = "B";
    else if (score >= 70)
        letter_grade = "C";
    else if (score >= 60)
        letter_grade = "D";
    else
        letter_grade = "F";

    return score;
}

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
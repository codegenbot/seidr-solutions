#include <vector>
#include <string>

int numerical_letter_grade(int score) {
    if(score >= 90)
        return 4;
    else if(score >=80)
        return 3;
    else if(score >=70)
        return 2;
    else if(score >=60)
        return 1;
    else
        return 0;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}
#include <vector>
#include <string>

std::string numerical_letter_grade(std::vector<float> grades) {
    std::string letter_grades[] = {"F","D+","D","D-","C+","C","C-","B+","B","B-","A+","A","A-","E"};
    int grade_index = (int)(grades[1] * 4);
    if(grade_index > 12)
        return "E";
    else
        return letter_grades[grade_index];
}

bool areSame(vector<string> a, vector<string>b){
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<float> grades = {0, 0.7};
    assert(areSame({numerical_letter_grade(grades)}, {"E", "D-"}));
    return 0;
}
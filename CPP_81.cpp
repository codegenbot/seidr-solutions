#include <vector>

bool is_same(string s1, string s2) {
    if (s1.size() != s2.size())
        return false;
    for (int i = 0; i < s1.size(); ++i)
        if (s1[i] != s2[i])
            return false;
    return true;
}

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
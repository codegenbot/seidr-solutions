```
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::vector<std::string>> numerical_letter_grade(std::vector<std::vector<float>> grades) {
    vector<vector<string>> letter_grades;  // Initialize it here

    for (vector<float> grade : grades) {
        vector<string> letter_grade;
        float sum = 0.0;
        int count = 0;

        for (float g : grade) {
            sum += g;
            count++;
        }

        string letter;
        if (sum / count >= 4.0)
            letter = "A+";
        else if (sum / count > 3.7)
            letter = "A";
        else if (sum / count > 3.3)
            letter = "A-";
        else if (sum / count > 3.0)
            letter = "B+";
        else if (sum / count > 2.7)
            letter = "B";
        else if (sum / count > 2.3)
            letter = "B-";
        else if (sum / count > 2.0)
            letter = "C+";
        else if (sum / count > 1.7)
            letter = "C";
        else if (sum / count > 1.3)
            letter = "C-";
        else if (sum / count > 1.0)
            letter = "D+";
        else if (sum / count > 0.7)
            letter = "D";
        else
            letter = "E";

        letter_grade.push_back(letter);
    }
    return letter_grades;
}
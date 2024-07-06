#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 4.0)
            result.push_back("A+");
        else if (grade > 3.7)
            result.push_back("A");
        else if (grade > 3.3)
            result.push_back("A-");
        else if (grade > 3.0)
            result.push_back("B+");
        else if (grade > 2.7)
            result.push_back("B");
        else if (grade > 2.3)
            result.push_back("B-");
        else if (grade > 2.0)
            result.push_back("C+");
        else if (grade > 1.7)
            result.push_back("C");
        else if (grade > 1.3)
            result.push_back("C-");
        else if (grade > 1.0)
            result.push_back("D+ ");
        else if (grade > 0.7)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

int main() {
    vector<float> grades = {4.0, 2.5};
    vector<string> result = numerical_letter_grade(grades);
    for (int i = 0; i < result.size(); i++) {
        if (i != result.size() - 1 && result[i] == "F" && result[i+1] == "D-")
            cout << "Test passed.\n";
        else
            cout << "Test failed.\n";
    }
    return 0;
}
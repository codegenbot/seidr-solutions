```cpp
#include <vector>
#include <string>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letterGrades;
    for (float grade : grades) {
        if (grade >= 4.0f)
            letterGrades.push_back("A");
        else if (grade >= 3.5f)
            letterGrades.push_back("B");
        else if (grade >= 3.0f)
            letterGrades.push_back("C");
        else if (grade >= 2.5f)
            letterGrades.push_back("D");
        else
            letterGrades.push_back("F");
    }
    return letterGrades;
}

int main() {
    vector<float> grades = {3.8f, 2.9f, 4.1f, 3.5f};
    vector<string> letterGrades = numerical_letter_grade(grades);

    for (const auto& grade : letterGrades) {
        cout << grade << " ";
    }
    return 0;
}
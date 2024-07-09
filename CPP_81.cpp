```
#include <vector>
#include <string>

bool isSame(char a, char b) {
    return (a == 'A' && b == '+' || a == 'B' && b == '+' || a == 'C' && b == '+' || a == 'D' && b == '+') ? true : false;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        if (grade >= 4.0)
            result.push_back("A+");
        else if (grade > 3.7)
            result.push_back(string("A"));;
        else if (grade > 3.3)
            result.push_back(string("A-"));
        else if (grade > 3.0)
            result.push_back(string("B+"));
        else if (grade > 2.7)
            result.push_back(string("B"));
        else if (grade > 2.3)
            result.push_back(string("B-"));
        else if (grade > 2.0)
            result.push_back(string("C+"));
        else if (grade > 1.7)
            result.push_back(string("C"));
        else if (grade > 1.3)
            result.push_back(string("C-"));
        else if (grade > 1.0)
            result.push_back(string("D+"));
        else if (grade > 0.7)
            result.push_back(string("D"));
        else
            result.push_back(string("E"));
    }
    return result;
}
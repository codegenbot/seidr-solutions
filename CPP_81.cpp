#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

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
            result.push_back("D+");
        else
            result.push_back("E");
    }
    return result;
}

int main_test() {
    std::vector<float> grades = {0, 0.7};
    std::vector<std::string> a = numerical_letter_grade(grades);
    if (a[0] >= 4.0)
        a[0] = "A+";
    else if (a[0] > 3.7)
        a[0] = "A";
    else if (a[0] > 3.3)
        a[0] = "A-";
    else if (a[0] > 3.0)
        a[0] = "B+";
    else if (a[0] > 2.7)
        a[0] = "B";
    else if (a[0] > 2.3)
        a[0] = "B-";
    else if (a[0] > 2.0)
        a[0] = "C+";
    else if (a[0] > 1.7)
        a[0] = "C";
    else if (a[0] > 1.3)
        a[0] = "C-";
    else if (a[0] > 1.0)
        a[0] = "D+";
    else
        a[0] = "D";
    std::vector<std::string> b = {a[0]};
    bool same = issame({a}, b);
    return 0;
}